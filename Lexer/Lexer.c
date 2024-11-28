#include "Lexer.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


static void read_char(Lexer *lex);
static void skip_whitespace(Lexer *lex);
static uint8_t is_letter(char ch);
static const char *read_ident(Lexer *lex, size_t *len);
static Token *create_token(TokenKind t, char *l);


extern Lexer *create_init(const char *input) {
    size_t len = sizeof(Lexer);
    Lexer *lex = malloc(len);
    memset(lex, 0, len);

    lex->input = input;
    lex->input_len = strlen(input);
    lex->position = 0;
    lex->read_position = 0;

    read_char(lex);

    return lex;
}


extern Token *lexer_next_token(Lexer *lex) {
    skip_whitespace(lex);
    Token *tok = NULL;

    switch (lex->ch) {
        case '(': {
            tok = create_token(T_LPAREN, "(");
            break;
        }
        case ')': {
            tok = create_token(T_RPAREN, ")");
            break;
        }
        case '{': {
            tok = create_token(T_LSQUIRLY, "{");
            break;
        }
        case '}': {
            tok = create_token(T_RSQUIRLY, "}");
            break;
        }
        case '\0': {
            tok = create_token(T_EOF, "EOF");
            break;
        }
    }

    if (is_letter(lex->ch)) {
        size_t len = 0;
        char *literal = NULL;
        const char *ident = read_ident(lex, &len);

        literal = strndup(ident, len);
        TokenKind kind = find_keyword(literal);

        tok = create_token(kind, literal);
        return tok;
    }

    if (!tok) {
        tok = create_token(T_ILLEGAL, NULL);
    }

    read_char(lex);
    return tok;
}


//
//          Private
//


static void skip_whitespace(Lexer *lex) {
    while (lex->ch == ' ' || lex->ch == '\t' || lex->ch == '\n' || lex->ch == '\r') {
        read_char(lex);
    }
}


static void read_char(Lexer *lex) {
    if (lex->read_position >= lex->input_len) {
        lex->ch = '\0';
    } else {
        lex->ch = lex->input[lex->read_position];
    }

    lex->position = lex->read_position;
    lex->read_position++;
}


static Token *create_token(TokenKind t, char *l) {
    size_t len = sizeof(Token);
    Token *token = malloc(len);
    memset(token, 0, len);

    token->literal = l;
    token->type = t;

    return token;
}

static const char *read_ident(Lexer *lex, size_t *len) {
    size_t position = lex->position;

    while (is_letter(lex->ch)) {
        read_char(lex);
    }

    if (len) {
        *len = lex->position - position;
    }

    return lex->input + position;
}

static uint8_t is_letter(char ch) {
    return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z') || (ch == '_');
}
