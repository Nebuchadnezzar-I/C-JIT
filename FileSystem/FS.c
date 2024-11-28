#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include "FS.h"

char *read_file_to_buffer(const char *filename, size_t *size) {
    struct stat st;
    if (stat(filename, &st) != 0) {
        perror("stat");
        return NULL;
    }

    if (st.st_size < 0) {
        fprintf(stderr, "File size is invalid\n");
        return NULL;
    }
    *size = (size_t)st.st_size;

    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("fopen");
        return NULL;
    }

    char *buffer = malloc(*size);
    if (!buffer) {
        perror("malloc");
        fclose(file);
        return NULL;
    }

    if (fread(buffer, 1, *size, file) != *size) {
        perror("fread");
        free(buffer);
        fclose(file);
        return NULL;
    }

    fclose(file);
    return buffer;
}
