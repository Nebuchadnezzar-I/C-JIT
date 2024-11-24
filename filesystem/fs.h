#pragma once

#include <stddef.h>

typedef struct {
    const char* file_path;
    char* file_content;
    size_t file_size;
    size_t file_depth; // 0 means main
} FileData;

void init_file_system(const char* root_path);
void load_to_memory(FileData* fd);
void free_file(FileData* fd);
