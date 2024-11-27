#include "TokenKinds.h"
#include <stddef.h>

static const char *TokenNames[] = {
#define TOK(X) #X,
    #include "clang/Basic/TokenKinds.def"
    NULL
    #undef TOK
};

static const char *PunctuatorSpellings[] = {
#define PUNCTUATOR(X, Y) Y,
    #include "clang/Basic/TokenKinds.def"
    NULL
    #undef PUNCTUATOR
};

const char *getTokenName(TokenKind Kind) {
    if (Kind >= 0 && Kind < NUM_TOKENS) {
        return TokenNames[Kind];
    }
    return "Unknown Token";
}

const char *getPunctuatorSpelling(TokenKind Kind) {
    if (Kind >= 0 && Kind < NUM_TOKENS && PunctuatorSpellings[Kind]) {
        return PunctuatorSpellings[Kind];
    }
    return NULL;
}

