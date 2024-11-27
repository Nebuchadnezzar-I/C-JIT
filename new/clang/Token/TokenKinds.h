#pragma once


typedef enum TokenKind {
#define TOK(X) X,
#include "./def/TokenKinds.def"
NUM_TOKENS
#undef TOK
} TokenKind;


/// '#' at the beginning of the line.
typedef enum PPKeywordKind {
#define PPKEYWORD(X) pp_##X,
#include "./def/TokenKinds.def"
NUM_PP_KEYWORDS
#undef PPKEYWORD
} PPKeywordKind;


typedef enum ObjCKeywordKind {
#define OBJC_AT_KEYWORD(X) objc_##X,
#include "./def/TokenKinds.def"
NUM_OBJC_KEYWORDS
#undef OBJC_AT_KEYWORD
} ObjCKeywordKind;


typedef enum NotableIdentifierKind {
#define NOTABLE_IDENTIFIER(X) notable_##X,
#include "clang/Basic/TokenKinds.def"
NUM_NOTABLE_IDENTIFIERS
#undef NOTABLE_IDENTIFIER
} NotableIdentifierKind;


typedef enum OnOffSwitch {
    OOS_ON,
    OOS_OFF,
    OOS_DEFAULT
} OnOffSwitch;

const char *getTokenName(TokenKind Kind);
const char *getPunctuatorSpelling(TokenKind Kind);
