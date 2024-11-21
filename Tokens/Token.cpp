// __ is used to avoid conflict with C++ keywords
#include <string>
enum TokenKind {
    //
    //          Keywords
    //
    // A – C
    ALIGNAS, ALIGNOF, _AND, AND_EQ, ASM, ATOMIC_CANCEL, ATOMIC_COMMIT,
    ATOMIC_NOEXCEPT, AUTO, BITAND, BITOR, BOOL, BREAK, CASE, CATCH, CHAR,
    CHAR8_T, CHAR16_T, CHAR32_T, CLASS, COMPL, CONCEPT, CONST, CONSTEVAL,
    CONSTEXPR, CONSTINIT, CONST_CAST, CONTINUE, CO_AWAIT, CO_RETURN, CO_YIELD,
    // D – P
    DECLTYPE, DEFAULT, DELETE, DO, DOUBLE, DYNAMIC_CAST, ELSE, ENUM, EXPLICIT,
    EXPORT, EXTERN, FALSE, FLOAT, FOR, FRIEND, GOTO, IF, INLINE, INT, LONG,
    MUTABLE, NAMESPACE, NEW, NOEXCEPT, NOT, NOT_EQ, NULLPTR, OPERATOR, OR,
    OR_EQ, PRIVATE, PROTECTED, PUBLIC,
    // R – Z
    REFLEXPR, REGISTER, REINTERPRET_CAST, REQUIRES, RETURN, SHORT, SIGNED,
    SIZEOF, STATIC, STATIC_ASSERT, STATIC_CAST, STRUCT, SWITCH, SYNCHRONIZED,
    TEMPLATE, THIS, THREAD_LOCAL, THROW, TRUE, TRY, TYPEDEF, TYPEID, TYPENAME,
    UNION, UNSIGNED, USING, VIRTUAL, VOID, VOLATILE, WCHAR_T, WHILE, XOR, XOR_EQ,
    //
    //          Operators
    //
    ASSIGN, // (=)
    ADD_ASSIGN, // (+=)
    SUB_ASSIGN, // (-=)
    MUL_ASSIGN, // (*=)
    DIV_ASSIGN, // (/=)
    MOD_ASSIGN, // (%=)
    AND_ASSIGN, // (&=)
    OR_ASSIGN, // (|=)
    XOR_ASSIGN, // (TokenKind^=)
    LEFT_SHIFT_ASSIGN, // (<<=)
    RIGHT_SHIFT_ASSIGN, // (>>=)
    //
    PREFIX_INCREMENT, // (++a)
    PREFIX_DECREMENT, // (--a)
    POSTFIX_INCREMENT, // (a++)
    POSTFIX_DECREMENT, // (a--)
    //
    UNARY_PLUS, // (+a)
    UNARY_MINUS, // (-a)
    PLUS, //(a + b)
    MINUS, //(a - b)
    MULTIPLY, //(a * b)
    DIVIDE, //(a / b)
    MODULO, //(a % b)
    BITWISE_NOT, // (~a)
    BITWISE_AND, //(a & b)
    BITWISE_OR, //(a | b)
    BITWISE_XOR, //(a ^ b)
    LEFT_SHIFT, //(a << b)
    RIGHT_SHIFT, //(a >> b)
    //
    LOGICAL_NOT, // (!a)
    LOGICAL_AND, // (a && b)
    LOGICAL_OR, // (a || b)
    //
    EQUAL, // (a == b)
    NOT_EQUAL, // (a != b)
    LESS_THAN, // (a < b)
    GREATER_THAN, // (a > b)
    LESS_EQUAL, // (a <= b)
    GREATER_EQUAL, // (a >= b)
    SPACESHIP, // (a <=> b)
    //
    SUBSCRIPT, // (a[...])
    DEREFERENCE, // (*a)
    ADDRESS_OF, // (&a)
    ARROW, // (a->b)
    DOT, // (a.b)
    ARROW_STAR, // (a->*b)
    DOT_STAR, // (a.*b)
    //
    //          Preprocessor Directives
    //
    DEFINE, UNDEF, INCLUDE, _IF, IFDEF, IFNDEF, ELIF, ELIFDEF, ELIFNDEF,
    _ELSE, ENDIF, LINE, ERROR, PRAGMA,

    TOKEN_ERR
};

// TODO: Implement string, ident etc.

// const std::unordered_map<std::string, TokenKind> StringToToken = {
//     { "ALIGNAS", TokenKind::ALIGNAS },
// };

TokenKind GetTokenKind(const std::string tok_name) {
    if (tok_name == "alignas") return TokenKind::ALIGNAS;
    if (tok_name == "alignof") return TokenKind::ALIGNOF;
    if (tok_name == "and") return TokenKind::_AND;
    if (tok_name == "and_eq") return TokenKind::AND_EQ;
    if (tok_name == "asm") return TokenKind::ASM;
    if (tok_name == "atomic_cancel") return TokenKind::ATOMIC_CANCEL;
    if (tok_name == "atomic_commit") return TokenKind::ATOMIC_COMMIT;
    if (tok_name == "atomic_noexcept") return TokenKind::ATOMIC_NOEXCEPT;
    if (tok_name == "auto") return TokenKind::AUTO;
    if (tok_name == "bitand") return TokenKind::BITAND;
    if (tok_name == "bitor") return TokenKind::BITOR;
    if (tok_name == "bool") return TokenKind::BOOL;
    if (tok_name == "break") return TokenKind::BREAK;
    if (tok_name == "case") return TokenKind::CASE;
    if (tok_name == "catch") return TokenKind::CATCH;
    if (tok_name == "char") return TokenKind::CHAR;
    if (tok_name == "char8_t") return TokenKind::CHAR8_T;
    if (tok_name == "char16_t") return TokenKind::CHAR16_T;
    if (tok_name == "char32_t") return TokenKind::CHAR32_T;
    if (tok_name == "class") return TokenKind::CLASS;
    if (tok_name == "compl") return TokenKind::COMPL;
    if (tok_name == "concept") return TokenKind::CONCEPT;
    if (tok_name == "const") return TokenKind::CONST;
    if (tok_name == "consteval") return TokenKind::CONSTEVAL;
    if (tok_name == "constexpr") return TokenKind::CONSTEXPR;
    if (tok_name == "constinit") return TokenKind::CONSTINIT;
    if (tok_name == "const_cast") return TokenKind::CONST_CAST;
    if (tok_name == "continue") return TokenKind::CONTINUE;
    if (tok_name == "co_await") return TokenKind::CO_AWAIT;
    if (tok_name == "co_return") return TokenKind::CO_RETURN;
    if (tok_name == "co_yield") return TokenKind::CO_YIELD;
    if (tok_name == "decltype") return TokenKind::DECLTYPE;
    if (tok_name == "default") return TokenKind::DEFAULT;
    if (tok_name == "delete") return TokenKind::DELETE;
    if (tok_name == "do") return TokenKind::DO;
    if (tok_name == "double") return TokenKind::DOUBLE;
    if (tok_name == "dynamic_cast") return TokenKind::DYNAMIC_CAST;
    if (tok_name == "explicit") return TokenKind::EXPLICIT;
    if (tok_name == "export") return TokenKind::EXPORT;
    if (tok_name == "extern") return TokenKind::EXTERN;
    if (tok_name == "false") return TokenKind::FALSE;
    if (tok_name == "float") return TokenKind::FLOAT;
    if (tok_name == "for") return TokenKind::FOR;
    if (tok_name == "friend") return TokenKind::FRIEND;
    if (tok_name == "goto") return TokenKind::GOTO;
    if (tok_name == "if") return TokenKind::IF;
    if (tok_name == "inline") return TokenKind::INLINE;
    if (tok_name == "int") return TokenKind::INT;
    if (tok_name == "long") return TokenKind::LONG;
    if (tok_name == "mutable") return TokenKind::MUTABLE;
    if (tok_name == "namespace") return TokenKind::NAMESPACE;
    if (tok_name == "new") return TokenKind::NEW;
    if (tok_name == "noexcept") return TokenKind::NOEXCEPT;
    if (tok_name == "not") return TokenKind::NOT;
    if (tok_name == "not_eq") return TokenKind::NOT_EQ;
    if (tok_name == "nullptr") return TokenKind::NULLPTR;
    if (tok_name == "operator") return TokenKind::OPERATOR;
    if (tok_name == "or") return TokenKind::OR;
    if (tok_name == "or_eq") return TokenKind::OR_EQ;
    if (tok_name == "private") return TokenKind::PRIVATE;
    if (tok_name == "protected") return TokenKind::PROTECTED;
    if (tok_name == "public") return TokenKind::PUBLIC;
    if (tok_name == "reflexpr") return TokenKind::REFLEXPR;
    if (tok_name == "register") return TokenKind::REGISTER;
    if (tok_name == "reinterpret_cast") return TokenKind::REINTERPRET_CAST;
    if (tok_name == "requires") return TokenKind::REQUIRES;
    if (tok_name == "return") return TokenKind::RETURN;
    if (tok_name == "short") return TokenKind::SHORT;
    if (tok_name == "signed") return TokenKind::SIGNED;
    if (tok_name == "sizeof") return TokenKind::SIZEOF;
    if (tok_name == "static") return TokenKind::STATIC;
    if (tok_name == "static_assert") return TokenKind::STATIC_ASSERT;
    if (tok_name == "static_cast") return TokenKind::STATIC_CAST;
    if (tok_name == "struct") return TokenKind::STRUCT;
    if (tok_name == "switch") return TokenKind::SWITCH;
    if (tok_name == "synchronized") return TokenKind::SYNCHRONIZED;
    if (tok_name == "template") return TokenKind::TEMPLATE;
    if (tok_name == "this") return TokenKind::THIS;
    if (tok_name == "thread_local") return TokenKind::THREAD_LOCAL;
    if (tok_name == "throw") return TokenKind::THROW;
    if (tok_name == "true") return TokenKind::TRUE;
    if (tok_name == "try") return TokenKind::TRY;
    if (tok_name == "typedef") return TokenKind::TYPEDEF;
    if (tok_name == "typeid") return TokenKind::TYPEID;
    if (tok_name == "typename") return TokenKind::TYPENAME;
    if (tok_name == "union") return TokenKind::UNION;
    if (tok_name == "unsigned") return TokenKind::UNSIGNED;
    if (tok_name == "using") return TokenKind::USING;
    if (tok_name == "virtual") return TokenKind::VIRTUAL;
    if (tok_name == "void") return TokenKind::VOID;
    if (tok_name == "volatile") return TokenKind::VOLATILE;
    if (tok_name == "wchar_t") return TokenKind::WCHAR_T;
    if (tok_name == "while") return TokenKind::WHILE;
    if (tok_name == "xor") return TokenKind::XOR;
    if (tok_name == "xor_eq") return TokenKind::XOR_EQ;
    if (tok_name == "assign") return TokenKind::ASSIGN;
    if (tok_name == "add_assign") return TokenKind::ADD_ASSIGN;
    if (tok_name == "sub_assign") return TokenKind::SUB_ASSIGN;
    if (tok_name == "mul_assign") return TokenKind::MUL_ASSIGN;
    if (tok_name == "div_assign") return TokenKind::DIV_ASSIGN;
    if (tok_name == "mod_assign") return TokenKind::MOD_ASSIGN;
    if (tok_name == "and_assign") return TokenKind::AND_ASSIGN;
    if (tok_name == "or_assign") return TokenKind::OR_ASSIGN;
    if (tok_name == "xor_assign") return TokenKind::XOR_ASSIGN;
    if (tok_name == "left_shift_assign") return TokenKind::LEFT_SHIFT_ASSIGN;
    if (tok_name == "right_shift_assign") return TokenKind::RIGHT_SHIFT_ASSIGN;
    if (tok_name == "prefix_increment") return TokenKind::PREFIX_INCREMENT;
    if (tok_name == "prefix_decrement") return TokenKind::PREFIX_DECREMENT;
    if (tok_name == "postfix_increment") return TokenKind::POSTFIX_INCREMENT;
    if (tok_name == "postfix_decrement") return TokenKind::POSTFIX_DECREMENT;
    if (tok_name == "unary_plus") return TokenKind::UNARY_PLUS;
    if (tok_name == "unary_minus") return TokenKind::UNARY_MINUS;
    if (tok_name == "plus") return TokenKind::PLUS;
    if (tok_name == "minus") return TokenKind::MINUS;
    if (tok_name == "multiply") return TokenKind::MULTIPLY;
    if (tok_name == "divide") return TokenKind::DIVIDE;
    if (tok_name == "modulo") return TokenKind::MODULO;
    if (tok_name == "bitwise_not") return TokenKind::BITWISE_NOT;
    if (tok_name == "bitwise_and") return TokenKind::BITWISE_AND;
    if (tok_name == "bitwise_or") return TokenKind::BITWISE_OR;
    if (tok_name == "bitwise_xor") return TokenKind::BITWISE_XOR;
    if (tok_name == "left_shift") return TokenKind::LEFT_SHIFT;
    if (tok_name == "right_shift") return TokenKind::RIGHT_SHIFT;
    if (tok_name == "logical_not") return TokenKind::LOGICAL_NOT;
    if (tok_name == "logical_and") return TokenKind::LOGICAL_AND;
    if (tok_name == "logical_or") return TokenKind::LOGICAL_OR;
    if (tok_name == "equal") return TokenKind::EQUAL;
    if (tok_name == "not_equal") return TokenKind::NOT_EQUAL;
    if (tok_name == "less_than") return TokenKind::LESS_THAN;
    if (tok_name == "greater_than") return TokenKind::GREATER_THAN;
    if (tok_name == "less_equal") return TokenKind::LESS_EQUAL;
    if (tok_name == "greater_equal") return TokenKind::GREATER_EQUAL;
    if (tok_name == "spaceship") return TokenKind::SPACESHIP;
    if (tok_name == "subscript") return TokenKind::SUBSCRIPT;
    if (tok_name == "dereference") return TokenKind::DEREFERENCE;
    if (tok_name == "address_of") return TokenKind::ADDRESS_OF;
    if (tok_name == "arrow") return TokenKind::ARROW;
    if (tok_name == "dot") return TokenKind::DOT;
    if (tok_name == "arrow_star") return TokenKind::ARROW_STAR;
    if (tok_name == "dot_star") return TokenKind::DOT_STAR;
    if (tok_name == "define") return TokenKind::DEFINE;
    if (tok_name == "undef") return TokenKind::UNDEF;
    if (tok_name == "include") return TokenKind::INCLUDE;
    if (tok_name == "if") return TokenKind::_IF;
    if (tok_name == "ifdef") return TokenKind::IFDEF;
    if (tok_name == "ifndef") return TokenKind::IFNDEF;
    if (tok_name == "elif") return TokenKind::ELIF;
    if (tok_name == "elifdef") return TokenKind::ELIFDEF;
    if (tok_name == "elifndef") return TokenKind::ELIFNDEF;
    if (tok_name == "else") return TokenKind::_ELSE;
    if (tok_name == "endif") return TokenKind::ENDIF;
    if (tok_name == "line") return TokenKind::LINE;
    if (tok_name == "error") return TokenKind::ERROR;
    if (tok_name == "pragma") return TokenKind::PRAGMA;
    return TokenKind::TOKEN_ERR;
}
