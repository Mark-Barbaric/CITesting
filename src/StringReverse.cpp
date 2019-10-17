#include "StringReverse.h"

using namespace CPPLondonUni;

StringReverse::StringReverse(const std::string& str) {

}

bool StringReverse::empty() const noexcept {
    return true;
}

bool StringReverse::operator==(const std::string& other) const noexcept {
    return true;
}

StringReverse::operator std::string() const {
    return {};
}
