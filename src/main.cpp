#include "token.h"
#include "token_stream.h"
#include "parser.h"
#include "facilities.h"

int main()
{
  try
  {
      while (cin) {
          Token t = ts.get();
          if (t.kind == 'q') break; // 'q' for quit
          if (t.kind == ';')        // ';' for "print now"
              cout << "=" << t.value << '\n';
          else
              ts.putback(t);
          cout << expression();
      }
  	keep_window_open();
  }
  catch (exception& e) {
      cerr << "error: " << e.what() << '\n';
  	keep_window_open();
      return 1;
  }
  catch (...) {
      cerr << "Oops: unknown exception!\n";
  	keep_window_open();
      return 2;
  }
}
