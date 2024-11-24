#pragma once

#include <stddef.h>
#include <stdint.h>
#include "../token/token.h"
#include "../filesystem/fs.h"

typedef struct {
    const char* input;
    size_t input_size;
    size_t position;
    size_t read_position;
    uint8_t ch;
} Lexer;

extern Lexer* new_lexer(FileData fd);
extern Token* lexer_next_token(Lexer* l);
