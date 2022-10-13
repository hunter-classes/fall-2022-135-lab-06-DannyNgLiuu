#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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
   CHECK(encryptVigenere("The quick brown fox jumps over 13 lazy dogs.", "cryptii") == "Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl.");
   CHECK(encryptVigenere("The quick brown fox jumps over 13 lazy dogs.", "cow") == "Vva sieey xtcsp tkz xqodo qjat 13 zwbm zquo.");
}

TEST_CASE("decryption") {
    CHECK(decryptCaesar("mjqqt", 5) == "hello");
    CHECK(decryptCaesar("fsy", 5) == "ant");
    CHECK(decryptCaesar("ejgwf", 5) == "zebra");
    CHECK(decryptCaesar("Fsy", 5) == "Ant");
    CHECK(decryptCaesar("Ejgwf", 5) == "Zebra");
    CHECK(decryptCaesar("Ej%)#&gwf", 5) == "Ze%)#&bra");
    CHECK(decryptCaesar("F Qnlmy-Djfw Fufwy", 5) == "A Light-Year Apart");
    CHECK(decryptVigenere("Vva sieey xtcsp tkz xqodo qjat 13 zwbm zquo.", "cow") == "The quick brown fox jumps over 13 lazy dogs.");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("Vyc fnqkm spdpv nqo hjfxa qmcg 13 eiha umvl.", "cryptii") == "The quick brown fox jumps over 13 lazy dogs.");
    CHECK(decryptVigenere("belvc", "cake") == "zebra");
}
