#include "Token.h"
#include <string.h>


const char* token_kind_arr[] = {
    #define STRING_DEFINE(name, str) str,
    TOKEN_KIND_LIST(STRING_DEFINE)
};


TokenKind find_keyword(const char* t) {
    for (int i = 0; i < TOKEN_KIND_COUNT; i++) {
        if (strcmp(t, token_kind_arr[i]) == 0) {
            return (TokenKind)i;
        }
    }

    return T_IDENT;
}


const char* token_to_str(TokenKind t) {
    if (t >= 0 && t < TOKEN_KIND_COUNT) {
        return token_kind_arr[t];
    }

    return "unknown";
}
