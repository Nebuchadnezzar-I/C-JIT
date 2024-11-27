#include "TokenKinds.h"
#include <iostream>

int main() {
    using namespace clang::tok;

    // Test tokens defined in your TokenKinds.def
    TokenKind testTokens[] = {
        identifier,
        numeric_constant,
        char_constant,
        l_square,
        r_square,
        plus,
        unknown
    };

    std::cout << "Token Names:\n";
    for (TokenKind token : testTokens) {
        std::cout << getTokenName(token) << std::endl;
    }

    return 0;
}
