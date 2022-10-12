#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "funcs.h"

int main()
{
  char a = shiftChar('W', 5);
  std::cout << a << "\n";
  std::string s = encryptCaesar("Hello, World!", 10);
  std::cout << s << "\n";
  std::string st = encryptVigenere("Hello, World!", "cake");
  std::cout << st << "\n";
  std::string stt = decryptCaesar("Rovvy, Gybvn!", 10);
  std::cout << stt << "\n";
  std::string sttt = decryptVigenere("Jevpq, Wyvnd!", "cake");
  std::cout << sttt << "\n";
}
