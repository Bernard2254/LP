#ifndef TOKENTYPE_H
#define TOKENTYPE_H

enum TokenType {
    // special tokens
    INVALID_TOKEN  = -2,
    UNEXPECTED_EOF = -1,
    END_OF_FILE    = 0,

    // symbols 
    ASSIGN = 1,              // =
    DOT_COMMA = 2,           // ;
    COMMA = 3,               // ,
    OPEN_CUR = 4,            // [
    CLOSE_CUR = 5,           // ]
    OPEN_BRA = 6,            // {
    CLOSE_BRA = 7,           // }
    OPEN_PAR = 8,            // (
    CLOSE_PAR = 9,           // )
    BIND = 10,               // => 

    // keywords
    PRINT = 11,               // print
    PRINTLN = 12,             // println
    PUSH = 13,                // push
    UNSHIFT = 14,             // unshift
    IF = 15,                  // if
    ELSE = 16,                // else
    WHILE = 17,               // while
    DO = 18,                  // do
    FOREACH = 19,             // foreach
    AND = 20,                 // and
    OR = 21,                  // or
    INPUT = 22,               // input
    SIZE = 23,                // size
    SORT = 24,                // sort
    REVERSE = 25,             // reverse
    KEYS = 26,                // keys
    VALUES = 27,              // values

    // operators
    EQUAL = 28,               // ==
    DIFF = 29,                // !=
    LESS = 30,                // <
    GREATER = 31,             // >
    LESS_EQ = 32,             // <=
    GREATER_EQ = 33,          // >=
    CONCATENATE = 34,         // .
    PLUS = 35,                // +
    MINUS = 36,               // -
    TIMES = 37,               // *
    DIV = 38,                 // /
    MOD = 39,                 // %

    // others
    NUMBER = 40,              // $
    STRING = 41,              // ""
    SVAR = 42,
    LVAR = 43,
    HVAR = 44,

};

#endif
