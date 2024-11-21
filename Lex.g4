// TODO: #define X Y \n int X = 0;

lexer grammar C;

// Keywords
AUTO: 'auto';
BREAK: 'break';
CASE: 'case';
CHAR: 'char';
CONST: 'const';
CONTINUE: 'continue';
DEFAULT: 'default';
DO: 'do';
DOUBLE: 'double';
ELSE: 'else';
ENUM: 'enum';
EXTERN: 'extern';
FLOAT: 'float';
FOR: 'for';
GOTO: 'goto';
IF: 'if';
INT: 'int';
LONG: 'long';
REGISTER: 'register';
RETURN: 'return';
SHORT: 'short';
SIGNED: 'signed';
SIZEOF: 'sizeof';
STATIC: 'static';
STRUCT: 'struct';
SWITCH: 'switch';
TYPEDEF: 'typedef';
UNION: 'union';
UNSIGNED: 'unsigned';
VOID: 'void';
VOLATILE: 'volatile';
WHILE: 'while';
// _
ALIGNAS: '_Alignas';
ALIGNOF: '_Alignof';
ATOMIC: '_Atomic';
BOOL: '_Bool';
COMPLEX: '_Complex';
GENERIC: '_Generic';
IMAGINARY: '_Imaginary';
NORETURN: '_Noreturn';
STATIC_ASSERT: '_Static_assert';
THREAD_LOCAL: '_Thread_local';

// C++ Keywords
ASM: 'asm';
BOOLCPP: 'bool';
CATCH: 'catch';
CLASS: 'class';
CONST_CAST: 'const_cast';
DELETE: 'delete';
DYNAMIC_CAST: 'dynamic_cast';
EXPLICIT: 'explicit';
EXPORT: 'export';
FALSE: 'false';
FRIEND: 'friend';
MUTABLE: 'mutable';
NAMESPACE: 'namespace';
NEW: 'new';
OPERATOR: 'operator';
PRIVATE: 'private';
PROTECTED: 'protected';
PUBLIC: 'public';
REINTERPRET_CAST: 'reinterpret_cast';
STATIC_CAST: 'static_cast';
TEMPLATE: 'template';
THIS: 'this';
THROW: 'throw';
TRUE: 'true';
TRY: 'try';
TYPENAME: 'typename';
TYPEID: 'typeid';
USING: 'using';
VIRTUAL: 'virtual';
WCHAR_T: 'wchar_t';

// C++11 Keywords
CHAR16_T: 'char16_t';
CHAR32_T: 'char32_t';
CONSTEXPR: 'constexpr';
DECLTYPE: 'decltype';
NOEXCEPT: 'noexcept';
NULLPTR: 'nullptr';

// Punctuators
L_SQUARE: '[';
R_SQUARE: ']';
L_PAREN: '(';
R_PAREN: ')';
L_BRACE: '{';
R_BRACE: '}';
PERIOD: '.';
ELLIPSIS: '...';
AMP: '&';
AMPAMP: '&&';
AMPEQUAL: '&=';
STAR: '*';
STAREQUAL: '*=';
PLUS: '+';
PLUSPLUS: '++';
PLUSEQUAL: '+=';
MINUS: '-';
ARROW: '->';
MINUSMINUS: '--';
MINUSEQUAL: '-=';
TILDE: '~';
EXCLAIM: '!';
EXCLAIMEQUAL: '!=';
SLASH: '/';
SLASHEQUAL: '/=';
PERCENT: '%';
PERCENTEQUAL: '%=';
LESS: '<';
LESSLESS: '<<';
LESSEQUAL: '<=';
LESSLESSEQUAL: '<<=';
SPACESHIP: '<=>';
GREATER: '>';
GREATERGREATER: '>>';
GREATEREQUAL: '>=';
GREATERGREATEREQUAL: '>>=';
CARET: '^';
CARETEQUAL: '^=';
PIPE: '|';
PIPEPIPE: '||';
PIPEEQUAL: '|=';
QUESTION: '?';
COLON: ':';
SEMI: ';';
EQUAL: '=';
EQUALEQUAL: '==';
COMMA: ',';
HASH: '#';
HASHHASH: '##';
HASHAT: '#@';
PERIODSTAR: '.*';
ARROWSTAR: '->*';
COLONCOLON: '::';
AT: '@';
LESSLESSLESS: '<<<';
GREATERGREATERGREATER: '>>>';

// Literals
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

INTEGER_CONSTANT
    :   ('0' | [1-9][0-9]*) IntegerSuffix?
    ;

FLOATING_CONSTANT
    :   ([0-9]+ '.' [0-9]* ExponentPart? | '.' [0-9]+ ExponentPart? | [0-9]+ ExponentPart) FloatSuffix?
    ;

CHARACTER_CONSTANT
    :   '\'' (EscapeSequence | ~('\\' | '\'')) '\''
    ;

STRING_LITERAL
    :   '"' (EscapeSequence | ~('\\' | '"'))* '"'
    ;

// Comments and Whitespace
COMMENT
    :   '/*' .*? '*/' -> skip
    ;

LINE_COMMENT
    :   '//' ~[\r\n]* -> skip
    ;

WS
    :   [ \t\r\n]+ -> skip
    ;

// Fragments
fragment
IntegerSuffix
    :   [uU] ([lL] [lL]? )?
    |   [lL] [lL]? [uU]?
    ;

fragment
ExponentPart
    :   [eE] [+-]? [0-9]+
    ;

fragment
FloatSuffix
    :   [fFlL]
    ;

fragment
EscapeSequence
    :   '\\' [abfnrtv\\'"]            // Simple escapes
    |   '\\' [0-7] [0-7]? [0-7]?      // Octal escapes
    |   '\\x' [0-9a-fA-F]+            // Hexadecimal escapes
    ;

// Additional rules can be added similarly...

