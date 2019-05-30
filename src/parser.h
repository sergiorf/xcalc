#ifndef PARSER_H
#define PARSER_H

#include "token.h"

double primary();
Token get_token();
double term();
double expression();

#endif
