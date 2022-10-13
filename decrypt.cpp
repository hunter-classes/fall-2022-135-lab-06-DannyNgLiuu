#include <iostream>
#include "decrypt.h"

char decryptShift(char c, int rshift) {
    int counter = 0;
    int ch = int(c);
    if(ch < 65 || (90 < ch && ch < 97) || ch > 122) {
        return char(ch);
    }
    while(counter < rshift) {
        if(ch == 65) {
            ch = 91;
        }
        if(ch == 97) {
            ch = 123;
        }
        ch--;
        counter++;
    }
    return char(ch);
}

std::string decryptCaesar(std::string ciphertext, int rshift) {
    int counter = 0;
    std::string decryptedString;
    while(counter < ciphertext.length()) {
    decryptedString += decryptShift(ciphertext[counter], rshift);
    counter++;
    }
    return decryptedString;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
    int textCounter = 0;
    int keyCounter = 0;
    char ch;
    char chDi;
    int digit;
    int chDigit;
    std::string endString;
    while(textCounter < ciphertext.length()) {
        if(keyCounter == keyword.length()) {
            keyCounter = 0;
        }
        ch = keyword[keyCounter];
        chDi = ciphertext[textCounter];
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
        endString += decryptShift(ciphertext[textCounter], digit);
        keyCounter++;
        textCounter++;
    }
    return endString;
}