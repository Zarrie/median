#define CATCH_CONFIG_MAIN 
#include "catch.h"
#include "median.h"

TEST_CASE("TEST 1") {
    medianStructure m;
	REQUIRE(m.getMedian() == 0);
}

TEST_CASE("TEST 2") {
    medianStructure m;
    m.insert(5);
	REQUIRE(m.getMedian() == 5);
}

TEST_CASE("TEST 3") {
    medianStructure m;
    m.insert(4).insert(3).insert(5).insert(9).insert(12).insert(13);
	REQUIRE(m.getMedian() == 7);
}

TEST_CASE("TEST 4") {
    medianStructure m;
    m.insert(4).insert(3).insert(5);
	REQUIRE(m.getMedian() == 4);
}