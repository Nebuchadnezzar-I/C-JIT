#include "token.h"
#include <string.h>

Token keywords[] = {
    { T_IF,       "if"        },
    { T_INT,      "int"       },
    { T_ASSIGN,   "="         },
};

#define NUM_KEYWORDS (sizeof(keywords) / sizeof(Token))

TokenKind lookup_keyword(const char* search_keyword) {
    for (int i = 0; i < NUM_KEYWORDS; i++) {
        if (strcmp(keywords[i].literal, search_keyword) == 0) {
            return keywords[i].type;
        }
    }

    return T_IDENT;
}

extern char* token_to_str(TokenKind type) {
    switch (type) {
        case T_ILLEGAL: return "illegal";
        case T_EQUALS: return "equals";
        case T_INT: return "int";
        case T_IDENT: return "ident";
        default: return "UNKNOWN_TOKEN_KIND";
    };
}
