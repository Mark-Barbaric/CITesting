#include "StringReverse.h"

using namespace CPPLondonUni;

StringReverse::StringReverse(const std::string& str) {

    for(int i = str.length() - 1; i >= 0; --i)
        revStr += str[i];

}

bool StringReverse::empty() const noexcept {
    return revStr.length() > 0;
}

bool StringReverse::operator==(const std::string& other) const noexcept {

    return other == revStr;
}

StringReverse::operator std::string() const {

    return revStr;
}
