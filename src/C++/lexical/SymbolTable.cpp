#include "SymbolTable.h"

SymbolTable::SymbolTable() {

    m_st["="] = TokenType.ASSIGN;
    m_st[";"] = TokenType.DOT_COMMA;
    m_st["."] = TokenType.COMMA;
    m_st["["] = TokenType.OPEN_CUR;
    m_st["]"] = TokenType.CLOSE_CUR;
    m_st["{"] = TokenType.OPEN_BRA;
    m_st["}"] = TokenType.CLOSE_BRA;
    m_st["("] = TokenType.OPEN_PAR;
    m_st[")"] = TokenType.CLOSE_PAR;
    m_st["=>"] = TokenType.BIND;

    m_st["print"] = TokenType.PRINT;
    m_st["println"] = TokenType.PRINTLN;
    m_st["push"] = TokenType.PUSH;
    m_st["unshift"] = TokenType.UNSHIFT;
    m_st["if"] = TokenType.IF;
    m_st["else"] = TokenType.ELSE;
    m_st["while"] = TokenType.WHILE;
    m_st["do"] = TokenType.DO;
    m_st["foreach"] = TokenType.FOREACH;
    m_st["and"] = TokenType.AND;
    m_st["or"] = TokenType.OR;
    m_st["input"] = TokenType.INPUT;
    m_st["size"] = TokenType.SIZE;
    m_st["sort"] = TokenType.SORT;
    m_st["reverse"] = TokenType.REVERSE;
    m_st["keys"] = TokenType.KEYS;
    m_st["values"] = TokenType.VALUES;

    m_st["=="] = TokenType.EQUAL;
    m_st["!="] = TokenType.DIFF;
    m_st["<"] = TokenType.LESS;
    m_st[">"] = TokenType.GREATER;
    m_st["<="] = TokenType.LESS_EQ;
    m_st[">="] = TokenType.GREATER_EQ;
    m_st["."] = TokenType.CONCATENATE;
    m_st["+"] = TokenType.PLUS;
    m_st["-"] = TokenType.MINUS;
    m_st["*"] = TokenType.TIMES;
    m_st["/"] = TokenType.DIV;
    m_st["%"] = TokenType.MOD;
}

SymbolTable::~SymbolTable() {
}

bool SymbolTable::contains(std::string token) {
    return m_st.find(token) != m_st.end();
}

enum TokenType SymbolTable::find(std::string token) {
    return this->contains(token) ?
              m_st[token] : INVALID_TOKEN;
}