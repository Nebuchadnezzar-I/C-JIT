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
        case T_L_PAREN: return "l_paren";
        case T_R_PAREN: return "r_paren";
        case T_L_SQUIRLY: return "l_squirly";
        case T_R_SQUIRLY: return "r_squirly";
        default: return "UNKNOWN_TOKEN_KIND";
    };
}
