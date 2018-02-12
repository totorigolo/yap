#pragma once

#include <string>
#include <iostream>
#include <vector>

#include "Lexer.h"
#include "State.h"

class Symbol;

class Automata {
public:
    explicit Automata(Lexer lexer) : mLexer{std::move(lexer)} {}

    virtual ~Automata() = default;

    void read();

    void shift(Symbol *symbol, State *state);

    void reduce(int n, Symbol *symbol);

    void debug() const;

//private: // TODO
public:
    std::vector<Symbol*> mSymbols;
    std::vector<State*> mStates;
    Lexer mLexer;
};