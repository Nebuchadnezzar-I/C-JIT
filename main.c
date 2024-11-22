#include <stdio.h>
#include "./lexer/lexer.h"

int main() {
    const char *input = "false true somethingElse 001";
    Lexer *lexer;
    TokenType tests[5];
    int testLength = 5;
    int i;

    tests[0] = T_FALSE;
    tests[1] = T_TRUE;
    tests[2] = T_IDENT;
    tests[3] = T_INT;
    tests[4] = T_EOF;

    lexer = create_lexer(input);

    for (i = 0; i < testLength; i++) {
        Token *token = lexer_next_token(lexer);

        if (token->type != tests[i]) {
            fprintf(stderr, "Test failed at index %d: got %d, expected %d\n",
                    i, token->type, tests[i]);
        }

        printf("O lit: %s, O kind %d \n", token->literal, token->type);
    }

    printf("All tests passed!");

    return 0;
}
