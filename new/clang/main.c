#include <stdio.h>
#include "./Token/TokenKinds.h"

int main() {
    // Example tokens
    TokenKind tk1 = numeric_constant;
    TokenKind tk2 = l_square; // Punctuator kind
    TokenKind tk3 = identifier;

    // Get and print token names
    printf("Token name for 'numeric_constant': %s\n", getTokenName(tk1));
    printf("Token name for 'l_square': %s\n", getTokenName(tk2));
    printf("Token name for 'identifier': %s\n", getTokenName(tk3));

    // Get and print punctuator spelling
    const char *spelling = getPunctuatorSpelling(tk2);
    if (spelling) {
        printf("Spelling for 'l_square': %s\n", spelling);
    } else {
        printf("'l_square' is not a punctuator.\n");
    }

    return 0;
}

