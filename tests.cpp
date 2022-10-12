#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
// add your tests here
TEST_CASE("caesar") {
    CHECK(encryptCaesar("hello", 5) == "hello");
}