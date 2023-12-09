#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Die Class"){
	Die d;
	for(int i = 0; i<10; i++)
	{
		d.roll();
		REQUIRE(d.rolled_value() >= 1);
		REQUIRE(d.rolled_value() <= 6);
	}
}