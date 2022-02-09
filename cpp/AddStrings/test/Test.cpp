#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/AddStrings.h"

using namespace x;

TEST_CASE("Add Strings", "[add_strings]")
{
    AddStrings a;

    SECTION("Add strings")
    {
        REQUIRE(a.DoAddStrings("10", "20") == "30");
        REQUIRE(a.DoAddStrings("99", "1") == "100");
        REQUIRE(a.DoAddStrings("10000", "40000") == "50000");
        REQUIRE(a.DoAddStrings("99999", "99999") == "199998");
    }
}
