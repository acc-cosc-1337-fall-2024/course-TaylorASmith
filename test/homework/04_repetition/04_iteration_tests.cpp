#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "gtest/gtest.h"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST(FactorialTest, PositiveValues) {
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(6), 720);
}

TEST(GCDTest, PositiveValues) {
    EXPECT_EQ(gcd(5, 15), 5);
    EXPECT_EQ(gcd(21, 28), 7);
    EXPECT_EQ(gcd(25, 100), 25);
}

