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
    //TODO: test it
}
