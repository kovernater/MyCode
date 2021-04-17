#define CATCH_CONFIG_MAIN
#include "catch2.hpp"
#include "MyString.h"
#include "Garage.h"

TEST_CASE("EEWF")
{
    char* string = read_string();
    REQUIRE(string == "Hello");
}