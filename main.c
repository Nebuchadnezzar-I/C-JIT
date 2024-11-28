#include "./FileSystem/FS.h"
#include "./Lexer/Lexer.h"
#include "./Token/Token.h"

#include <stdio.h>
#include <sys/mman.h>

int main(int argc, char **argv) {
    if (argc < 1) {
        return 1;
    }

    // Read passed file to buffer
    const char *filename = argv[1];
    size_t size;
    char *buffer = read_file_to_buffer(filename, &size);

    if (!buffer) {
        printf("Err");
        munmap(buffer, size);
    }

    Lexer *lexer = create_init(buffer);

    while (1) {
        Token *token = lexer_next_token(lexer);

        if (token->type == T_EOF) {
            break;
        }

        printf("Type: %s, Lit: %s \n", token_to_str(token->type), token->literal);
    }

    return 0;
}
