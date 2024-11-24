#include "lexer.h"
#include "../token/token.h"
#include "../filesystem/fs.h"
#include <stdlib.h>
#include <string.h>

void lexer_read_char(Lexer* l);

Lexer* new_lexer(FileData fd) {
    Lexer* lex;
    lex = calloc(1, sizeof *lex);

    if (!lex) {
        return NULL;
    }

    lex->input = fd.file_content;
    lex->input_size = fd.file_size;

    lexer_read_char(lex);
    return lex;
}

void lexer_read_char(Lexer* lex) {
    if (lex->read_position >= lex->input_size) {
        lex->ch = 0;
    } else {
        lex->ch = lex->input[lex->read_position];
    }

    lex->position = lex->read_position;
    lex->read_position += 1;
}

char peek_char(Lexer* lex) {
    if (lex->read_position >= lex->input_size) {
        return 0;
    }

    return lex->input[lex->position];
}

void skip_white_space(Lexer* lex) {
    while ((lex->ch == ' ') || (lex->ch == '\t') || (lex->ch == '\n') || (lex->ch == '\r')) {
        lexer_read_char(lex);
    }
}

uint8_t is_digit(char ch) {
    return (('0' <= ch) && (ch <= '9')) ? 1 : 0;
}

uint8_t is_letter(char ch) {
    return ((('a' <= ch) && (ch <= 'z')) || (('A' <= ch) && (ch <= 'Z')) || (ch == '_')) ? 1 : 0;
}

char* read_identifier(Lexer* l) {
    size_t pos;
    uint8_t is;
    char* ret;
    pos = l->position;
    while ((is = is_letter(l->ch))) {
        lexer_read_char(l);
        is = is_letter(l->ch);
    }

    ret = calloc((l->position - pos) + 1, sizeof *ret);
    if (!ret) { return NULL; }

    memcpy(ret, l->input + pos, l->position - pos);

    l->position--;
    l->read_position--;
    return ret;
}

char* read_number(Lexer* l) {
    size_t pos;
    uint8_t is;
    char* ret;
    pos = l->position;
    while ((is = is_digit(l->ch))) {
        lexer_read_char(l);
        is = is_digit(l->ch);
    }

    ret = calloc((l->position - pos) + 1, sizeof *ret);
    if (!ret) { return NULL; }

    memcpy(ret, l->input + pos, l->position - pos);

    l->position--;
    l->read_position--;
    return ret;
}

Token* lexer_next_token(Lexer* lex) {
    Token* tok;
    tok = calloc(1, sizeof *tok);
    skip_white_space(lex);

    if (!tok) {
        return NULL;
    }

    // = or ==
    if (lex->ch == '=') {
        lexer_read_char(lex);

        if (peek_char(lex) == '=') {
            tok->type = T_EQUALS;
            tok->literal = "==";
            lexer_read_char(lex);
            return tok;
        }

        tok->type = T_ASSIGN;
        tok->literal = "=";
        return tok;
    }

    // TODO: Move to separate function
    if (peek_char(lex) == '(') {
        tok->type = T_L_PAREN;
        tok->literal = "(";
        lexer_read_char(lex);
        return tok;
    }

    if (peek_char(lex) == ')') {
        tok->type = T_R_PAREN;
        tok->literal = ")";
        lexer_read_char(lex);
        return tok;
    }

    if (peek_char(lex) == '{') {
        tok->type = T_L_SQUIRLY;
        tok->literal = "{";
        lexer_read_char(lex);
        return tok;
    }

    if (peek_char(lex) == '}') {
        tok->type = T_R_SQUIRLY;
        tok->literal = "}";
        lexer_read_char(lex);
        return tok;
    }

    if (is_letter(lex->ch)) {
        tok->literal = read_identifier(lex);
        tok->type = lookup_keyword(tok->literal);
        lexer_read_char(lex);
        return tok;
    } else if (is_digit(lex->ch)) {
        tok->literal = read_number(lex);
        tok->type = T_INT;
        lexer_read_char(lex);
        return tok;
    } else {
        char str[2];
        str[0] = lex->ch;
        str[1] = '\0';
        tok->literal = str;
        tok->type = T_ILLEGAL;
        lexer_read_char(lex);
        return tok;
    }

    tok->type = T_EOF;
    tok->literal = "";
    return tok;
}
