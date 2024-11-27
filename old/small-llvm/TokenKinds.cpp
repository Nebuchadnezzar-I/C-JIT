#include "TokenKinds.h"

namespace clang {
namespace tok {

const char *getTokenName(TokenKind Kind) {
    switch (Kind) {
        #define TOK(X) case X: return #X;
        #include "TokenKinds.def"
        default:
            return "Unknown Token";
    }
}

} // namespace tok
} // namespace clang
