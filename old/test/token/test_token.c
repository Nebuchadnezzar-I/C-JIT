#include "test_token.h"
#include "../../token/token.h"
#include <stdio.h>


void test_token() {
    // Test
    TokenKind kind = find_keyword("if");
    if (kind && kind != T_UNKNOWN) {
        printf("Token found! \n");
    }

    const char* token_str = token_to_str(T_UNKNOWN);
    if (token_str) {
        printf("String to token found! \n");
    }
}
