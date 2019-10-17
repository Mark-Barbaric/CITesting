#include "catch.hpp"
#include "StringReverse.h"

using namespace CPPLondonUni;

TEST_CASE("A default constructed StringReverse is empty", "[stringreverse]") {
    const StringReverse s;
    CHECK(s.empty());
    REQUIRE(s == "");
}


TEST_CASE("A StringReverse constructed with 'Hello World' becomes 'dlroW olleH'", "[stringreverse]") {
    const StringReverse s{"Hello World"};
    CAPTURE(s);
    SECTION("Non Empty String Test")
    {
        INFO("Non empty string should return false");
        CHECK(!s.empty());
    }

    SECTION("Reverse String Test")
    {
        REQUIRE(s == "dlroW olleH");
    }
}
