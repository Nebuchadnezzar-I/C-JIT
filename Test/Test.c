#include "Test.h"
#include <stdio.h>


int validateAllTokens(void) {
    TokenKind tk = kw_for;

    printf("Token name: %s\n", getTokenName(tk));
    printf("Keyword spelling: %s\n", getKeywordSpelling(tk));
    printf("Is identifier: %d\n", isAnyIdentifier(tk));
    printf("Is string literal: %d\n", isStringLiteral(tk));
    printf("Is annotation: %d\n", isAnnotation(tk));
    printf("Is pragma annotation: %d\n", isPragmaAnnotation(tk));

    return 0;
}
