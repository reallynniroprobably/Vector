#include "lexer.h"


LexedFile lexFile(const std::string& fileContents) {
    std::vector<Token> lexedFile = Token();
    bool isComment = false;
    bool inString  = false;
    bool inChar    = false;

    for (const char c : fileContents) {
        if (!isComment) {
            switch (c) {
                case ' ':
                case '\t':
                case '\n':
                c
                default:
            }
         }
    }
    lexedFile.emplace_back("", EOF_TOKEN);
    return LexedFile(std::move(lexedFile));
}