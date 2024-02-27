#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Test get_gc_content") 
{
	REQUIRE(get_gc_content( "AGCTATAG" ) == 0.375);
	REQUIRE(get_gc_content( "CGCTATAG" ) == 0.50);
}

