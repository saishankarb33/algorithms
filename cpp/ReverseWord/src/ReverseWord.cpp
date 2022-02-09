#include "../inc/ReverseWord.h"

#include <cstring>
#include <algorithm>

using namespace reverseword;

std::string ReverseWord::DoReverseWord(std::string s)
{
    if (s.length() < 1) return "INVALID";
    if (s.length() == 1) return s;

    for (size_t i=0; i<s.size()/2; i++) {
        char t = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-1-i] = t;
    }
    return s;
}
