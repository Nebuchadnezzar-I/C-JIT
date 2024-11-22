#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "lexer.h"

typedef struct Lexer {
    const char *input;
    size_t input_len;
    size_t position;
    size_t read_pos;
    char ch;
} Lexer;

static void _lexer_read_char(Lexer *lexer);
static void _lexer_skip_whitespace(Lexer *lexer);

static const char *_lexer_read_ident(Lexer *lexer, size_t *len);
static const char *_lexer_read_int(Lexer *lexer, size_t *len);
static TokenType _get_keyword_from_literal(const char* literal, size_t len);

static uint8_t _is_letter(char ch);
static uint8_t _is_number(char ch);

//
//                          Public Functions
//

Token *token_create(TokenType type, char *literal) {
    size_t len = sizeof(Token);
    Token *token = malloc(len);

    memset(token, 0, len);

    token->literal = literal;
    token->type = type;

    return token;
}

Lexer *create_lexer(const char* input) {
    size_t len = sizeof(Lexer);
    Lexer *lexer = malloc(len);
    memset(lexer, 0, len);

    lexer->input = input;
    lexer->input_len = strlen(input);
    lexer->position = 0;
    lexer->read_pos = 0;

    _lexer_read_char(lexer);

    return lexer;
}

Token *lexer_next_token(Lexer *lexer) {
    Token *tok = NULL;

    _lexer_skip_whitespace(lexer);

    switch (lexer->ch) {
        case '\0':
            tok = token_create(T_EOF, NULL);
            break;
    }

    if (_is_letter(lexer->ch)) {
        size_t len = 0;
        const char *ident = _lexer_read_ident(lexer, &len);

        TokenType type = _get_keyword_from_literal(ident, len);

        tok = token_create(type, strndup(ident, len));
        return tok;
    }

    if (_is_number(lexer->ch)) {
        size_t len = 0;
        char *literal = NULL;
        const char *ident = _lexer_read_int(lexer, &len);

        literal = strndup(ident, len);

        tok = token_create(T_INT, literal);
        return tok;
    }

    if (!tok) {
        tok = token_create(T_ILLEGAL, NULL);
    }

    _lexer_read_char(lexer);

    return tok;
}

//
//                          Private Functions
//

static void _lexer_read_char(Lexer *lexer) {
    if (lexer->read_pos >= lexer->input_len) {
        lexer->ch = '\0';
    } else {
        lexer->ch = lexer->input[lexer->read_pos];
    }

    lexer->position = lexer->read_pos;
    lexer->read_pos++;
}

static void _lexer_skip_whitespace(Lexer *lexer) {
    while (lexer->ch == ' ' || lexer->ch == '\t' || lexer->ch == '\n' ||
        lexer->ch == '\r') {
        _lexer_read_char(lexer);
    }
}

static const char *_lexer_read_ident(Lexer *lexer, size_t *len) {
    size_t position = lexer->position;

    while (_is_letter(lexer->ch)) {
        _lexer_read_char(lexer);
    }

    if (len) {
        *len = lexer->position - position;
    }

    return lexer->input + position;
}

static const char *_lexer_read_int(Lexer *lexer, size_t *len) {
    size_t position = lexer->position;

    while (_is_number(lexer->ch)) {
        _lexer_read_char(lexer);
    }

    if (len) {
        *len = lexer->position - position;
    }

    return lexer->input + position;
}

static TokenType _get_keyword_from_literal(const char* literal, size_t len) {
    if (strncmp(literal, "true", len) == 0) {
        return T_TRUE;
    }

    if (strncmp(literal, "false", len) == 0) {
        return T_FALSE;
    }

    return T_IDENT;
}

static uint8_t _is_letter(char ch) {
    return 'a' <= ch && ch <= 'z' || 'A' <= ch && ch <= 'Z' || ch == '_';
}

static uint8_t _is_number(char ch) { return '0' <= ch && '9' >= ch; }
