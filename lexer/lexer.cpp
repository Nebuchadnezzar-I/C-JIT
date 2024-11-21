#include <string>
#include <variant>
#include "./token.cpp"

struct token final {
    token_type type;
    std::variant<std::string, char, int> literal;
};

class lexer final {
    private:
        std::string_view input;
        size_t position;
        size_t read_position;
        char byte;

    public:
        lexer(std::string_view input);
        void read_char(void) noexcept;
        void next_token(token &) noexcept;
};

lexer::lexer(std::string_view input) : input{input}, position{0}, read_position{1}, byte{input[0]} {
    if (input.empty()) {
        throw std::exception();
    }

    return;
}

void lexer::read_char(void) noexcept {
    if (this->read_position >= this->input.length()) {
        this->byte = '\0';
    } else [[likely]] {
        this->byte = this->input[this->read_position];
    }

    this->position = this->read_position;
    this->read_position += 1;

    return;
}

void lexer::next_token(token &t) noexcept {
    while (isspace(this->byte)) {
        this->read_char();
    }

    if (isdigit(this->byte)) {
        std::string number;
        while (isdigit(this->byte)) {
            number += this->byte;
            this->read_char();
        }

        t.type = token_type::integer;
        t.literal = number;
        return;
    }

    if (isalpha(this->byte)) {
        std::string identifier;
        while (isalpha(this->byte)) {
            identifier += this->byte;
            this->read_char();
        }

        if (identifier == "fn") {
            t.type = token_type::function;
            t.literal = identifier;
        } else if (identifier == "let") {
            t.type = token_type::let;
            t.literal = identifier;
        } else {
            t.type = token_type::identifier;
            t.literal = identifier;
        }
        return;
    }

    if (this->byte == '"') {
        this->read_char();
        std::string str;
        while (this->byte != '"' && this->byte != '\0') {
            str += this->byte;
            this->read_char();
        }

        if (this->byte == '"') {
            this->read_char();
            t.type = token_type::identifier;
            t.literal = str;
        } else {
            t.type = token_type::illegal;
            t.literal = "Unterminated string";
        }
        return;
    }

    switch (this->byte) {
        case '=':
            t.type = token_type::assign;
            t.literal = this->byte;
            break;

        case ';':
            t.type = token_type::semicolon;
            t.literal = this->byte;
            break;

        case '(':
            t.type = token_type::lparen;
            t.literal = this->byte;
            break;

        case ')':
            t.type = token_type::rparen;
            t.literal = this->byte;
            break;

        case ',':
            t.type = token_type::comma;
            t.literal = this->byte;
            break;

        case '+':
            t.type = token_type::plus;
            t.literal = this->byte;
            break;

        case '{':
            t.type = token_type::lsquirly;
            t.literal = this->byte;
            break;

        case '}':
            t.type = token_type::rsquirly;
            t.literal = this->byte;
            break;

        case '\0':
            t.type = token_type::eof;
            t.literal = this->byte;
            break;

        default:
            t.type = token_type::illegal;
            t.literal = this->byte;
    }

    this->read_char();

    return;
}
