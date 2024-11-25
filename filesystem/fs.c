#include "fs.h"
#include <stdio.h>
#include <stdlib.h>


const char* load_main_file(const char* file_loc) {
    FILE *fptr = fopen(file_loc, "rb");
    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", file_loc);
        return NULL;
    }

    fseek(fptr, 0, SEEK_END);
    long file_size = ftell(fptr);
    rewind(fptr);

    char *file_contents = (char *)malloc(file_size + 1);
    if (file_contents == NULL) {
        printf("Error: Memory allocation failed\n");
        fclose(fptr);
        return NULL;
    }

    size_t read_size = fread(file_contents, 1, file_size, fptr);
    if (read_size != file_size) {
        printf("Error: Failed to read the entire file\n");
        free(file_contents);
        fclose(fptr);
        return NULL;
    }

    file_contents[file_size] = '\0';

    fclose(fptr);
    return file_contents;
}
