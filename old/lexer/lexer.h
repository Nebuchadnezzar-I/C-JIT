#pragma once


#include <stddef.h>
#include "../token/token.h"


typedef struct {
    const char* input;
    size_t input_len;
    size_t position;
    size_t read_position;
    char ch;
} Lexer;


typedef struct {
    TokenKind type;
    char *literal;
} Token;


extern Lexer *create_init(const char *input);


extern Token *lexer_next_token(Lexer *lex);
