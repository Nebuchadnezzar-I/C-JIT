#include <stdio.h>
#include "lexer/lexer.h"
#include "./filesystem/fs.h"


// test_token();
// test_lexer();


int main(int argc, char* argv[]) {
    if (1 == argc) {
        printf("No file! \n");
        return 1;
    }

    // Load file
    const char *file_loc = argv[1];
    const char *file_contents = load_main_file(file_loc);

    if (!file_contents) {
        printf("File not found\n");
        return 1;
    }

    // Lex
    Lexer *lexer = create_init(file_contents);

    if (!lexer) {
        fprintf(stderr, "Failed to initialize lexer.\n");
    }

    while (1) {
        Token *token = lexer_next_token(lexer);

        if (token->type == T_EOF) {
            break;
        }

        printf("Type: %s, Lit: %s \n", token_to_str(token->type), token->literal);
    }

    return 0;
}
