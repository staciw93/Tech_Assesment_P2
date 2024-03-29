#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "findSSN.h"
#include <vector>

/*
Unit Testing file using Catch. All that is needed is the catch.hpp
file included in the project.
*/


TEST_CASE("Test isNum", "[digit]"){
  //test should pass
  REQUIRE( isNum('0') );
  //test letter
  REQUIRE( !isNum('a') );
  //test should pass
  REQUIRE( isNum('8') );
  //test capital
  REQUIRE( !isNum('V') );
  //test should pass
  REQUIRE( isNum('5') );
}

TEST_CASE("Test redactSSN", "[SSN]"){
  std::string testStrings[6] = {"asdf", "123-45-6789", "45a-34-0x9e", "aTe-ir-AWdi", "69487234514", "aienvirkslr"};

  //test string of wrong length
  REQUIRE( redactSSN(testStrings[0]) == "asdf");
  //test should pass
  REQUIRE( redactSSN(testStrings[1]) == "***-**-****" );
  //test right format with letters and number
  REQUIRE( redactSSN(testStrings[2]) == "45a-34-0x9e" );
  //test right format only letters
  REQUIRE( redactSSN(testStrings[3]) == "aTe-ir-AWdi" );
  //test right length only numbers
  REQUIRE( redactSSN(testStrings[4]) == "69487234514" );
  //test right length only letters
  REQUIRE( redactSSN(testStrings[5]) == "aienvirkslr" );
}
