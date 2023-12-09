#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"

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

TEST_CASE("Verify Roll Class"){
	Die d1;
	Die d2;
	Roll r(d1,d2);
	for(int i = 0; i<10; i++)
	{
		r.roll_die();
		REQUIRE(r.roll_value() >= 2);
		REQUIRE(r.roll_value() <= 12);
	}
}