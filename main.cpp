#include <iostream>
#include "caesar.h"
#include "funcs.h"

int main()
{
  char a = shiftChar('W', 5);
  std::cout << a << "\n";
  std::string s = encryptCaesar("Hello, World!", 10);
  std::cout << s << "\n";
}
