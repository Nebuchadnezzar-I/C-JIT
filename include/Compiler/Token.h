#pragma once

#include <magic_enum.hpp>
#include <string>

namespace Token {

enum class TokenType {
    //
    //      Keywords
    //
    WHILE,
    TRUE,
    //
    //      Chars
    //
    ASSIGN,
    SEMICOLON,
    LPAREN,
    RPAREN,
    COMMA,
    PLUS,
    LSQUIRLY,
    RSQUIRLY,
    ILLEGAL,
    //
    //      Value holders
    //
    INTIGER,
    FLOAT,
    HEX_NUMBER,
    BINARY_NUMBER,
    STRING,
    CHARACTER,
    IDENTIFIER,

    _EOF,
    _ILLEGAL,
};

struct TokenWval { // Token with value
    TokenType type;
    std::string literal;
};

TokenType IdentifyToken(std::string s);
std::string IdentifyToken(TokenType t);

} // Token
