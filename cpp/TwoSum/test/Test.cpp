#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/TwoSum.h"

using namespace x;

TEST_CASE("TwoSum", "[twosum]")
{
    TwoSum t;

    SECTION("TwoSum")
    {
        std::vector<int> res = {2, 4};
        REQUIRE(t.DoTwoSum({1, 2, 4, 7}, 6) == res);

        res = {2, 11};
        REQUIRE(t.DoTwoSum({2, 5, 9, 11}, 13) == res);

        res = {7, 5, 4, 8};
        REQUIRE(t.DoTwoSum({10, 7, 5, 1, 4, 8}, 12) == res);
    }
}
