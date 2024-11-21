#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "./lexer.cpp"

std::string token_type_to_string(token_type type) {
    switch (type) {
        case token_type::illegal: return "illegal";
        case token_type::eof: return "eof";
        case token_type::identifier: return "identifier";
        case token_type::integer: return "integer";
        case token_type::assign: return "assign";
        case token_type::plus: return "plus";
        case token_type::comma: return "comma";
        case token_type::semicolon: return "semicolon";
        case token_type::lparen: return "lparen";
        case token_type::rparen: return "rparen";
        case token_type::lsquirly: return "lsquirly";
        case token_type::rsquirly: return "rsquirly";
        case token_type::function: return "function";
        case token_type::let: return "let";
        default: return "unknown";
    }
}

std::string variant_to_string(const std::variant<std::string, char, int> &literal) {
    if (std::holds_alternative<int>(literal)) {
        return std::to_string(std::get<int>(literal));
    } else if (std::holds_alternative<std::string>(literal)) {
        return std::get<std::string>(literal);
    } else if (std::holds_alternative<char>(literal)) {
        return std::string(1, std::get<char>(literal));
    }
    return "unknown";
}

bool compare_literals(const std::variant<std::string, char, int> &a,
                      const std::variant<std::string, char, int> &b) {
    if (a.index() != b.index()) {
        return false;
    }

    // Same type, compare values
    if (std::holds_alternative<int>(a)) {
        return std::get<int>(a) == std::get<int>(b);
    } else if (std::holds_alternative<std::string>(a)) {
        return std::get<std::string>(a) == std::get<std::string>(b);
    } else if (std::holds_alternative<char>(a)) {
        return std::get<char>(a) == std::get<char>(b);
    }

    return false;
}


int test_more_tokens(void) {
    std::string input {
        "let five = 5;"
        "let ten = 10;"
        "let add = fn(x, y) {"
        " x + y;"
        "};"
    };

    token expected_tokens[27] = {
        {token_type::let, "let"},
        {token_type::identifier, "five"},
        {token_type::assign, '='},
        {token_type::integer, "5"},
        {token_type::semicolon, ';'},

        {token_type::let, "let"},
        {token_type::identifier, "ten"},
        {token_type::assign, '='},
        {token_type::integer, "10"},
        {token_type::semicolon, ';'},

        {token_type::let, "let"},
        {token_type::identifier, "add"},
        {token_type::assign, '='},
        {token_type::function, "fn"},

        {token_type::lparen, '('},
        {token_type::identifier, "x"},
        {token_type::comma, ','},
        {token_type::identifier, "y"},

        {token_type::rparen, ')'},
        {token_type::lsquirly, '{'},
        {token_type::identifier, "x"},
        {token_type::plus, '+'},

        {token_type::identifier, "y"},
        {token_type::semicolon, ';'},
        {token_type::rsquirly, '}'},
        {token_type::semicolon, ';'},

        {token_type::eof, '\0'},
    };

    lexer lex { input };
    token token;

    for (auto &expected : expected_tokens) {
        lex.next_token(token);

        if (token.type != expected.type) {
            std::cerr
                << "Expected token type: "
                << token_type_to_string(expected.type)
                << " got "
                << token_type_to_string(token.type)
                << '\n';

            std::exit(1);
        }

        if (!compare_literals(token.literal, expected.literal)) {
            std::cerr
                << "Literal value mismatch: expected " << variant_to_string(expected.literal)
                << " but got " << variant_to_string(token.literal) << '\n';
            std::exit(1);
        }
    }

    return 0;

}

int test_sample_tokens(void) {
    std::string input { "=+(){},;" };

    token expected_tokens[9] = {
        {token_type::assign, '='},
        {token_type::plus, '+'},
        {token_type::lparen, '('},
        {token_type::rparen, ')'},
        {token_type::lsquirly, '{'},
        {token_type::rsquirly, '}'},
        {token_type::comma, ','},
        {token_type::semicolon, ';'},
        {token_type::eof, '\0'},
    };

    lexer lex { input };
    token token;

    for (auto &expected : expected_tokens) {
        lex.next_token(token);

        if (token.type != expected.type) {
            std::cerr
                << "Expected token type: "
                << token_type_to_string(expected.type)
                << " got "
                << token_type_to_string(token.type)
                << '\n';

            std::exit(1);
        }

        if (!compare_literals(token.literal, expected.literal)) {
            std::cerr
                << "Literal value mismatch: expected " << variant_to_string(expected.literal)
                << " but got " << variant_to_string(token.literal) << '\n';
            std::exit(1);
        }
    }

    return 0;
}

int main() {
    std::cout << "Running tests...\n";
    std::cout << "Test sample tokens...\n";
    test_sample_tokens();

    std::cout << "Test more tokens...\n";
    test_more_tokens();

    return EXIT_SUCCESS;
}
