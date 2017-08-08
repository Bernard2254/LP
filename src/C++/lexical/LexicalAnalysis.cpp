#include <cstdio>
#include "LexicalAnalysis.h"

LexicalAnalysis::LexicalAnalysis(const char* filename) : m_line(0) {
    m_file = fopen(filename, "r");
    if (!m_file)
        throw "Unable to open file";
}

LexicalAnalysis::~LexicalAnalysis() {
    fclose(m_file);
}

int LexicalAnalysis::line() const {
    return m_line;
}

struct Lexeme LexicalAnalysis::nextToken() {
    struct Lexeme lex = { "", END_OF_FILE };

    // TODO: implement me.

    // HINT: read a char.
    // int c = getc(file);

    // HINT: unread a char.
    // if (c != -1)
    //     ungetc(c, file);

    return lex;
}
