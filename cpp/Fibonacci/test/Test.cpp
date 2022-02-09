#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/Fibonnaci.h"

using namespace x;

TEST_CASE("Fibonacci", "[fibonacci]")
{
    Fibonacci f;

    SECTION("Get Fibonacci")
    {
        REQUIRE(f.GetFibonacci(0) == 0);
        REQUIRE(f.GetFibonacci(1) == 1);
        REQUIRE(f.GetFibonacci(2) == 1);
        REQUIRE(f.GetFibonacci(3) == 2);
        REQUIRE(f.GetFibonacci(4) == 3);
        REQUIRE(f.GetFibonacci(10) == 55);        

        // Demonstrating O(1) time complexity for non-recursive solution
        REQUIRE(f.GetFibonacci_1(10) == 55);
        REQUIRE(f.GetFibonacci_1(1000) == 1556111435);
    }
}
