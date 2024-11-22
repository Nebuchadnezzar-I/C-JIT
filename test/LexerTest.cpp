#include "../include/Compiler/Token.h"
#include "../include/Compiler/Lexer.h"
#include <iostream>

void basic_chars() {
    const char* input = R"(=+(){},; "hello world")";

    Token::TokenWval expected_tokens[10] = {
        { Token::TokenType::ASSIGN, "=" },
        { Token::TokenType::PLUS, "+"},
        { Token::TokenType::LPAREN, "("},

        { Token::TokenType::RPAREN, ")"},
        { Token::TokenType::LSQUIRLY, "{"},
        { Token::TokenType::RSQUIRLY, "}"},

        { Token::TokenType::COMMA, ","},
        { Token::TokenType::SEMICOLON, ";"},
        { Token::TokenType::STRING, "hello world"},

        { Token::TokenType::_EOF, "\0"},
    };

    Lexer::MainLexer lexer(input);
    Token::TokenWval token;

    for (const auto &expected : expected_tokens) {
        lexer.next_token(token);
        
        if (token.literal != expected.literal) {
            std::cerr
                << "Expected token literal: "
                << expected.literal 
                << " got "
                << token.literal
                << '\n';

            std::exit(1);
        }

        if (token.type != expected.type) {
            std::cerr
                << "Expected token type: "
                << Token::IdentifyToken(expected.type)
                << " got "
                << Token::IdentifyToken(expected.type)
                << '\n';

            std::exit(1);
        }
    }

    std::cout << "All tests passed successfully\n";
}

int main() {
    std::cout << "Running LexerTest..." << std::endl;
    basic_chars();
    return 0;
}
