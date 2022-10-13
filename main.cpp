#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
#include "funcs.h"

int main()
{
  char a = shiftChar('W', 5);
  std::cout << a << "\n";
  std::string s = encryptCaesar("Ant", 5);
  std::cout << s << "\n";
  std::string st = encryptVigenere("Hello, World!", "cake");
  std::cout << st << "\n";
  std::string stt = decryptCaesar("Ej%)#&gwf", 5);
  std::cout << stt << "\n";
  std::string sttt = decryptVigenere("belvc", "cake");
  if(sttt == "zebra") {
    std::cout << "got here";
  }
  std::cout << sttt << "\n";
}
