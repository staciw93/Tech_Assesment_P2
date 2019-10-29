#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "findSSN.h"


TEST_CASE("Test isNum", "[digit]"){
  REQUIRE( isNum("0") );
  REQUIRE( !isNum("") );
  REQUIRE( !isNum("a") );
  REQUIRE( isNum("8") );
  REQUIRE( !isNum("V") );
  REQUIRE( isNum("5") );
}
