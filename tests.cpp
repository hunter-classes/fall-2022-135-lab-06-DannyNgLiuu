#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
// add your tests here
TEST_CASE("caesar") {
    CHECK(encryptCaesar("hello", 5) == "mjqqt");
    CHECK(encryptCaesar("ant", 5) == "fsy");
    CHECK(encryptCaesar("zebra", 5) == "ejgwf");
    CHECK(encryptCaesar("Ant", 5) == "Fsy");
    CHECK(encryptCaesar("Zebra", 5) == "Ejgwf");
    CHECK(encryptCaesar("Ze%)#&bra", 5) == "Ej%)#&gwf");
    CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
}

TEST_CASE("vigenere") {
   CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}