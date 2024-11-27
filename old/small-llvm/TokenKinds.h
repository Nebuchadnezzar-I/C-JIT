#pragma once

namespace clang {
namespace tok {

enum TokenKind : unsigned short {
#define TOK(X) X,
#include "./TokenKinds.def"
};

//
// enum PPKeywordKind {
// #define PPKEYWORD(X) pp_##X,
// #include "./TokenKinds.def"
//   NUM_PP_KEYWORDS
// };
//
// enum ObjCKeywordKind {
// #define OBJC_AT_KEYWORD(X) objc_##X,
// #include "./TokenKinds.def"
//   NUM_OBJC_KEYWORDS
// };
//
// enum NotableIdentifierKind {
// #define NOTABLE_IDENTIFIER(X) X,
// #include "./TokenKinds.def"
//   NUM_NOTABLE_IDENTIFIERS
// };
//
// enum OnOffSwitch {
//   OOS_ON, OOS_OFF, OOS_DEFAULT
// };

const char *getTokenName(TokenKind Kind);

};
} // namespace llvm
