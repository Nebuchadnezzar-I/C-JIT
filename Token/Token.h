#pragma once


#include <stdbool.h>


/// Provides a simple uniform namespace for tokens from all C languages.
typedef enum {
    #define TOK(X) X,
    #include "./defs/TokenKinds.def"
    NUM_TOKENS,
    ILLEGAL
} TokenKind;


/// Provides a namespace for preprocessor keywords which start with a
/// '#' at the beginning of the line.
typedef enum {
    #define PPKEYWORD(X) pp_##X,
    #include "./defs/TokenKinds.def"
    NUM_PP_KEYWORDS
} PPKeywordKind;


/// Provides a namespace for Objective-C keywords which start with
/// an '@'.
typedef enum {
    #define OBJC_AT_KEYWORD(X) objc_##X,
    #include "./defs/TokenKinds.def"
    NUM_OBJC_KEYWORDS
} ObjCKeywordKind;


/// Provides a namespace for notable identifers such as float_t and
/// double_t.
typedef enum {
    #define NOTABLE_IDENTIFIER(X) X,
    #include "./defs/TokenKinds.def"
    NUM_NOTABLE_IDENTIFIERS
} NotableIdentifierKind;


/// Defines the possible values of an on-off-switch (C99 6.10.6p2).
typedef enum {
    OOS_ON,
    OOS_OFF,
    OOS_DEFAULT
} OnOffSwitch;


/// Determines the name of a token as used within the front end.
///
/// The name of a token will be an internal name (such as "l_square")
/// and should not be used as part of diagnostic messages.
const char *getTokenName(TokenKind Kind);


/// Determines the spelling of simple punctuation tokens like
/// '!' or '%', and returns NULL for literal and annotation tokens.
///
/// This routine only retrieves the "simple" spelling of the token,
/// and will not produce any alternative spellings (e.g., a
/// digraph). For the actual spelling of a given Token, use
/// Preprocessor::getSpelling().
const char *getPunctuatorSpelling(TokenKind Kind);


/// Determines the spelling of simple keyword and contextual keyword
/// tokens like 'int' and 'dynamic_cast'. Returns NULL for other token kinds.
const char *getKeywordSpelling(TokenKind Kind);


/// Returns the spelling of preprocessor keywords, such as "else".
const char *getPPKeywordSpelling(PPKeywordKind Kind);


/// Return true if this is a raw identifier or an identifier kind.
bool isAnyIdentifier(TokenKind K);


/// Return true if this is a C or C++ string-literal (or
/// C++11 user-defined-string-literal) token.
bool isStringLiteral(TokenKind K);


/// Return true if this is a "literal" kind, like a numeric
/// constant, string, etc.
bool isLiteral(TokenKind K);


/// Return true if this is any of tok::annot_* kinds.
bool isAnnotation(TokenKind K);


/// Return true if this is an annotation token representing a pragma.
bool isPragmaAnnotation(TokenKind K);


// bool isRegularKeywordAttribute(TokenKind K);
