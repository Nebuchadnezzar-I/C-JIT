#include "./token/token.h"
#include "./lexer/lexer.h"
#include <stdio.h>

int main() {
    const char* input = "== cc 211";
    Lexer* lexer = new_lexer(input);

    if (!lexer) {
        fprintf(stderr, "Failed to create lexer.\n");
        return 1;
    }

    printf("Lexing input: %s\n", input);

    while(1) {
        Token* token = lexer_next_token(lexer);

        if (!token) {
            fprintf(stderr, "Error allocating token.\n");
            return 1;
        }

        if (token->type == T_EOF) {
            break;
        }

        printf(
            "Token: Type = %s, Literal = '%s'\n",
            token_to_str(token->type),
            token->literal
        );
    }

    return 0;
}
