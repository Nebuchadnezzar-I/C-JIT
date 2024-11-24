#include "fs.h"

#include <stdio.h>
#include <stdlib.h>

void init_file_system(const char* root_path) {
    // printf("Initializing file system at root: %s\n", root_path);
}

void load_to_memory(FileData* fd) {
    if (!fd || !fd->file_path) {
        fprintf(stderr, "Invalid FileData or file_path\n");
        return;
    }

    FILE* file = fopen(fd->file_path, "rb");
    if (!file) {
        perror("Error opening file");
        return;
    }

    fseek(file, 0, SEEK_END);
    size_t file_size = ftell(file);
    fd->file_size = file_size;
    rewind(file);

    fd->file_content = (char*)malloc(file_size + 1);
    if (!fd->file_content) {
        perror("Memory allocation failed");
        fclose(file);
        return;
    }

    fread(fd->file_content, 1, file_size, file);
    fd->file_content[file_size] = '\0';
    fclose(file);

    // printf("Loaded file: %s (%zu bytes)\n", fd->file_path, file_size);
}

void free_file(FileData* fd) {
    if (!fd || !fd->file_content) {
        return;
    }

    free(fd->file_content);
    fd->file_content = NULL;
    // printf("Freed file: %s\n", fd->file_path);
}
