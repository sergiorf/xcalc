#ifndef TOKEN_STREAM_H
#define TOKEN_STREAM_H

#include "token.h"
#include "facilities.h"

class Token_stream {
public:
    Token_stream();
    Token get();
    void putback(Token t);
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

extern Token_stream ts;

#endif
