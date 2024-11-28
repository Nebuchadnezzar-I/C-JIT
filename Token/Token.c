#include "Token.h"


const char *TokNames[] = {
    #define TOK(X) #X,
    #define KEYWORD(X,Y) #X,
    #include "./defs/TokenKinds.def"
};


const char *getTokenName(TokenKind Kind) {
    if (Kind < NUM_TOKENS)
        return TokNames[Kind];

    return "illegal";
}


const char *getPunctuatorSpelling(TokenKind Kind) {
    switch (Kind) {
        #define PUNCTUATOR(X,Y) case X: return Y;
        #include "./defs/TokenKinds.def"
        default: break;
    }

    return "illegal";
}


const char *getKeywordSpelling(TokenKind Kind) {
    switch (Kind) {
        #define KEYWORD(X,Y) case kw_ ## X: return #X;
        #include "./defs/TokenKinds.def"
        default: break;
    }

    return "illegal";
}


const char *getPPKeywordSpelling(PPKeywordKind Kind) {
    switch (Kind) {
        #define PPKEYWORD(x) case pp_##x: return #x;
        #include "./defs/TokenKinds.def"
        default: break;
    }

    return "illegal";
}


bool isAnyIdentifier(TokenKind K) {
    return (K == identifier) || (K == raw_identifier);
}


bool isStringLiteral(TokenKind K) {
    return
        K == string_literal || K == wide_string_literal ||
        K == utf8_string_literal || K == utf16_string_literal ||
        K == utf32_string_literal;
}


bool isLiteral(TokenKind K) {
    return
        K == numeric_constant || K == char_constant ||
        K == wide_char_constant || K == utf8_char_constant ||
        K == utf16_char_constant || K == utf32_char_constant ||
        isStringLiteral(K) || K == header_name || K == binary_data;
}


bool isAnnotation(TokenKind Kind) {
    switch (Kind) {
        #define ANNOTATION(X) case annot_ ## X: return true;
        #include "./defs/TokenKinds.def"
        default:
            break;
    }

    return false;
}


bool isPragmaAnnotation(TokenKind Kind) {
    switch (Kind) {
        #define PRAGMA_ANNOTATION(X) case annot_ ## X: return true;
        #include "./defs/TokenKinds.def"
        default:
            break;
    }
    return false;
}


// bool isRegularKeywordAttribute(TokenKind K) {
//     return (
//         false
//         #include "./defs/TokenKinds.def"
//     );
// }
