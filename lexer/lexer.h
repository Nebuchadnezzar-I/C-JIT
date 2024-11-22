#pragma once

typedef enum TokenType {
    T_IDENT,
    T_STRING,
    T_ILLEGAL,
    T_INT,
    T_EOF,
    T_TRUE,
    T_FALSE,
} TokenType;

typedef struct VWToken {
    TokenType type;
    char *literal;
} Token;

typedef struct Lexer Lexer;
Lexer *create_lexer(const char *input);
Token *lexer_next_token(Lexer *lexer);
Token *token_create(TokenType type, char *literal);
