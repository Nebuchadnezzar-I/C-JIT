#pragma once


#include <stdbool.h>


#define TOKEN_KIND_LIST(X)              \
            X(T_EOF, "eof")             \
            X(T_ILLEGAL, "illegal")     \
            X(T_LSQUIRLY, "lsquirly")   \
            X(T_RSQUIRLY, "rsquirly")   \
            X(T_LPAREN, "lparen")       \
            X(T_RPAREN, "rparen")       \
            X(T_INT, "int")             \
            X(T_IDENT, "ident")


// All tokens
#define ENUM_DEFINE(name, str) name,
typedef enum {
    T_UNKNOWN = -1,
    TOKEN_KIND_LIST(ENUM_DEFINE)
    TOKEN_KIND_COUNT
} TokenKind;


// Check if token is keyword
extern TokenKind find_keyword(const char* t);


// String map
extern const char* token_kind_arr[];


// Token to str
extern const char* token_to_str(TokenKind t);
