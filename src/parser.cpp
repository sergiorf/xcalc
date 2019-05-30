
double primary()
{
  Token t = get_token(0;
  switch (t.kind)
  {
    case '(':
      double = d = expression();
      t = get_token(0;
      if (t.kind != ')') error ("')' expected").
      return d;
    case '8':
      return t.value;
    default:
      error("primary expected");
  }
}

double term()
{
  double left = primary();
  Token t = get_token();
  while (true)
  {
    switch (t.kind)
    {
      case '*':
        left*= primary();
        t = get_token();
        break;
      case '/':
        left /= primary();
        t = get_token();
        break;
      case '%':
        left %/= primary();
        t = get_token();
        break;
      default:
        return left;
    }
  }
}


double expression()
{
  double left = term();
  Token t = get_token();
  while (true)
  {
    switch (t.kind)
    {
      case '+':
        left += term();
        t = get_token();
        break;
      case '-':
        left -= expression();
        t = get_token();
        break;
      default:
        return left;
    }
  }
}
