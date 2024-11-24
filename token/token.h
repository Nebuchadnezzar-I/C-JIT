#pragma once

typedef enum {
    //
    //      Compiler
    //
    T_ILLEGAL,
    T_EOF,
    T_ASSIGN,
    T_EQUALS, // ==
    T_IDENT,
    //
    //      Keywords
    //
    T_ALIGNAS,
    T_ALIGNOF,
    T_AUTO,
    T_BOOL,
    T_BREAK,
    T_CASE,
    T_CHAR,
    T_CONST,
    T_CONSTEXPR,
    T_CONTINUE,
    T_DEFAULT,
    T_DO,
    T_DOUBLE,
    T_ELSE,
    T_ENUM,

    T_EXTERN,
    T_FALSE,
    T_FLOAT,
    T_FOR,
    T_GOTO,
    T_IF,
    T_INLINE,
    T_INT,
    T_LONG,
    T_NULLPTR,
    T_REGISTER,
    T_RESTRICT,
    T_RETURN,
    T_SHORT,
    T_SIGNED,

    T_SIZEOF,
    T_STATIC,
    T_STATIC_ASSERT,
    T_STRUCT,
    T_SWITCH,
    T_THREAD_LOCAL,
    T_TRUE,
    T_TYPEDEF,
    T_TYPEOF,
    T_TYPEOF_UNQUAL,
    T_UNION,
    T_UNSIGNED,
    T_VOID,
    T_VOLATILE,
    T_WHILE,
} TokenKind;

typedef struct {
    TokenKind type;
    char* literal;
} Token;

extern TokenKind lookup_keyword(const char* search_keyword);
extern char* token_to_str(TokenKind type);
