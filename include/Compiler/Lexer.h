#pragma once

#include <magic_enum.hpp>
#include <string_view>

namespace Lexer {

class MainLexer final {
public:
    MainLexer(std::string_view input);
    void read_char(void) noexcept;
    void next_token(Token::TokenWval &) noexcept;

private:
    std::string_view input;
    size_t position = 0;
    size_t read_position = 0;
    char byte = 0;
};

} // Lexer
