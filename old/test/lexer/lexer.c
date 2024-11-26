#include "lexer.h"
#include <stdio.h>
#include "../../lexer/lexer.h"
#include "../../token/token.h"


void test_lexer() {
    const char *input = "    int";
    Lexer *lexer = create_init(input);

    if (!lexer) {
        fprintf(stderr, "Failed to initialize lexer.\n");
    }

    Token *token = lexer_next_token(lexer);

    printf("Lexing: %s \n", input);
    printf("Type: %s, Lit: %s \n", token_to_str(token->type), token->literal);
}
