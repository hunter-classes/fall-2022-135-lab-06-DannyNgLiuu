#include <iostream>
#include "vigenere.h"
#include "caesar.h"

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    int textCounter = 0;
    int keyCounter = 0;
    char ch;
    char chDi;
    int digit;
    int chDigit;
    std::string endString;
    while(textCounter < plaintext.length()) {
        if(keyCounter == keyword.length()) {
            keyCounter = 0;
        }
        ch = keyword[keyCounter];
        chDi = plaintext[textCounter];
        digit = char(ch);
        chDigit = char(chDi);
        if(chDigit < 65 || (90 < chDigit && chDigit < 97) || chDigit > 122) {
            keyCounter--;
        }
        if(digit <= 90) {
            digit = digit - 65;
        } else {
            digit = digit - 97;
        }
        std::cout << digit <<  " " << plaintext[textCounter] << "\n";
        endString += shiftChar(plaintext[textCounter], digit);
        keyCounter++;
        textCounter++;
    }
    return endString;
}