#include "SymbolTable.h"

SymbolTable::SymbolTable() {
    // FIXME: Add the tokens here.
    // m_st["???"] = ???;
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