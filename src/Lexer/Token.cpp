#include "../../include/Compiler/Token.h"

namespace Token {

Token::TokenType IdentifyToken(std::string s) {
    auto tokenType = magic_enum::enum_cast<Token::TokenType>(s);
    if (tokenType) {
        return *tokenType;
    }

    throw "Invalid token string: " + s;
}

std::string IdentifyToken(Token::TokenType t) {
    return std::string(magic_enum::enum_name(t));
}

} // Token
