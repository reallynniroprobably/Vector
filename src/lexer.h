#ifndef LEXER
#define LEXER
#include <string>
#include <vector>
enum TokenType {
    KEYWORD,
    OPERATOR,
    DELIMITER,
    INT_LITERAL,
    FLOAT_LITERAL,
    STRING_LITERAL,
    CHARACTER_LITERAL,
    BOOLEAN_LITERAL,
    EOF_TOKEN,
    FILLER_TOKEN,
};

enum Tokens {
    IF,
    FOR,
    WHILE,
    ELSE,
    SWITCH,
    CASE,
    DO,
    RETURN,
    BREAK,
    CONTINUE,
    CLASS,
    OBJECT,
    THIS,
    PUBLIC,
    PRIVATE,
    PROTECTED,
    ENUM,
    VOID,
    CONST,
    HEADER,
    PLUS,
    HYPHEN_MINUS,
    ASTERISK,
    SOLIDUS,
    AMPERSAND,
    DOUBLE_PLUS,
    DOUBLE_HYPHEN_MINUS,
    EQUAL,
    NOT_EQUAL,
    LESS_THAN,
    GREATER_THAN,
    LESS_THAN_OR_EQUAL,
    GREATER_THAN_OR_EQUAL,
    ASSIGN,
    ADD_AND_ASSIGN,
    SUBTRACT_AND_ASSIGN,
    AND,
    OR,
    NOT,
    PERIOD,
    LEFT_PARENTHESIS,
    RIGHT_PARENTHESIS,
    LEFT_SQUARE_BRACKET,
    RIGHT_SQUARE_BRACKET,
    LEFT_CURLY_BRACKET,
    RIGHT_CURLY_BRACKET,
    SEMICOLON,
    COLON,
    COMMA,
};
struct Token {
    std::string value;
    TokenType type;
    explicit Token(std::string value = "", const TokenType type = FILLER_TOKEN) : value(std::move(value)), type(type) {}
};

struct LexedFile {
    std::vector<Token> tokens;
    explicit LexedFile(std::vector<Token> tokens) : tokens(std::move(tokens)) {}
};

LexedFile lexFile(const std::string& fileContents);

#endif //LEXER