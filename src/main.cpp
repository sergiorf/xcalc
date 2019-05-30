#include <division.h>

static const char *const HEADER = "\nDivider © 2018 Monkey Claps Inc.\n\n";
static const char *const USAGE = "Usage:\n\tdivider <numerator> <denominator>\n\nDescription:\n\tComputes the result of a fractional division,\n\tand reports both the result and the remainder.\n";

int main(int argc, const char *argv[])
{
  try
  {
    while (cin)
      cout << expression() << '\n';
  }
  catch (exception& e)
  {
    cerr << e.what() << '\n';
    return 1;
  }
  catch (...)
  {
    cerr << "exception\n";
    return 2;
  }
}
