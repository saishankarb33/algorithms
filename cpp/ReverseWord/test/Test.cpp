#define CATCH_CONFIG_MAIN
#include "../../../deps/Catch2/single_include/catch.hpp"

#include "../inc/ReverseWord.h"

using namespace reverseword;

TEST_CASE("Reverse word", "[reverse_word]")
{
    ReverseWord r;

    SECTION("Verify word reversal")
    {
        REQUIRE(r.DoReverseWord("alpha") == "ahpla");
        REQUIRE(r.DoReverseWord("bravo") == "ovarb");
        REQUIRE(r.DoReverseWord("charlie") == "eilrahc");
        REQUIRE(r.DoReverseWord("delta") == "atled");
        REQUIRE(r.DoReverseWord("xray") == "yarx");
        REQUIRE(r.DoReverseWord("yankee") == "eeknay");
        REQUIRE(r.DoReverseWord("zulu") == "uluz");
        REQUIRE(r.DoReverseWord("") == "INVALID");
        REQUIRE(r.DoReverseWord("s") == "s");
    }
}
