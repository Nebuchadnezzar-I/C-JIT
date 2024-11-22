#include "../../include/Compiler/Token.h"
#include "../../include/Compiler/Lexer.h"
#include <iostream>

namespace Lexer {

MainLexer::MainLexer(std::string_view input)
    : input { input }, position { 0 }, read_position { 1 }, byte { input[0] } {
    if (input.empty()) {
        throw std::exception();
    }

    return;
}

void MainLexer::read_char(void) noexcept {
    if (this->read_position >= this->input.length()) {
        this->byte = '\0';
    } else [[likely]] {
        this->byte = this->input[this->read_position];
    }

    this->position = this->read_position;
    this->read_position += 1;

    return;
}

void MainLexer::next_token(Token::TokenWval &t) noexcept {
    switch (this->byte) {

        case '"': {
            std::cout << "Heel";
            std::string literal;

            while (this->byte != '"' && this->byte != '\0') {
                literal += this->byte;
                this->read_char();
            }

            std::cout << literal;

            t.type = Token::TokenType::STRING;
            t.literal = literal;
            this->read_char();

            break;
        }

        case '=':
            t.type = Token::TokenType::ASSIGN;
            t.literal = this->byte;
            break;

        case ';':
            t.type = Token::TokenType::SEMICOLON;
            t.literal = this->byte;
            break;

        case '(':
            t.type = Token::TokenType::LPAREN;
            t.literal = this->byte;
            break;

        case ')':
            t.type = Token::TokenType::RPAREN;
            t.literal = this->byte;
            break;

        case ',':
            t.type = Token::TokenType::COMMA;
            t.literal = this->byte;
            break;

        case '+':
            t.type = Token::TokenType::PLUS;
            t.literal = this->byte;
            break;

        case '{':
            t.type = Token::TokenType::LSQUIRLY;
            t.literal = this->byte;
            break;

        case '}':
            t.type = Token::TokenType::RSQUIRLY;
            t.literal = this->byte;
            break;

        case '\0':
            t.type = Token::TokenType::_EOF;
            t.literal = "\0";
            break;

        default:
            t.type = Token::TokenType::_ILLEGAL;
            t.literal = this->byte;
    }

    this->read_char();

    return;
}

} // Lexer
