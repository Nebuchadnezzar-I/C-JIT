#include "./filesystem/fs.h"
#include "./token/token.h"
#include "./lexer/lexer.h"
#include <stdio.h>

FileData init_file(const char *root_path) {
    FileData fd = {
        .file_path = root_path,
        .file_content = NULL,
        .file_depth = 0
    };

    load_to_memory(&fd);

    return fd;
}

int main(int argc, char **argv) {
    if (!argv[1]) { return 1; } // File path

    FileData fd = init_file(argv[1]);
    Lexer* lexer = new_lexer(fd);

    if (!lexer) {
        fprintf(stderr, "Failed to create lexer.\n");
        return 1;
    }

    while(1) {
        Token* token = lexer_next_token(lexer);

        if (!token) {
            fprintf(stderr, "Error allocating token.\n");
            return 1;
        }

        if (token->type == T_EOF || token->type == T_ILLEGAL) {
            break;
        }

        printf(
            "Token: Type = %s, Literal = '%s'\n",
            token_to_str(token->type),
            token->literal
        );
    }

    free_file(&fd);
    return 0;
}
