// class SimpleLexer {
//     std::string Source;
//     size_t Position;
//
// public:
//     SimpleLexer(const std::string &source) : Source(source), Position(0) {}
//
//      clang::tok::TokenKind getNextToken() {
//         if (Position >= Source.size()) return clang::tok::NUM_TOKENS; // End of input
//
//         // Skip spaces
//         while (Position < Source.size() && isspace(Source[Position])) ++Position;
//
//         // Check for "int"
//         if (Source.substr(Position, 3) == "int") {
//             Position += 3;
//             return clang::tok::kw_int;
//         }
//
//         // Check for "return"
//         if (Source.substr(Position, 6) == "return") {
//             Position += 6;
//             return clang::tok::kw_return;
//         }
//
//         // Check for "+"
//         if (Source[Position] == '+') {
//             ++Position;
//             return clang::tok::plus;
//         }
//
//         // Unknown token, skip and return unknown
//         ++Position;
//         return clang::tok::unknown;
//     }
// };

//    SimpleLexer lexer("int x = 10 + 20; return x;");
//    clang::tok::TokenKind token;
//    while ((token = lexer.getNextToken()) != clang::tok::NUM_TOKENS) {
//        std::cout << "Token: " << clang::tok::getTokenName(token) << "\n";
//    }
