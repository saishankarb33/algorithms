#include "../inc/AddStrings.h"

#include <cstring>

using namespace x;

std::string AddStrings::DoAddStrings(std::string n1, std::string n2)
{
    std::string& longstr  = ( n1.size() >= n2.size() ? n1 : n2 );
    std::string& shortstr = ( n1.size() <  n2.size() ? n1 : n2 );

    int longlen = longstr.size();
    int shortlen = shortstr.size();

    char carry = 0;
    int i, j;
    
    std::string result;    
    for (i = longlen-1, j=shortlen-1; i>=0; i--, j--)
    {
        int add = 0;
        if (j>=0)
        {
            add = longstr[i] + shortstr[j] - 2 * '0' + carry;
        }
        else
        {
            add = longstr[i] - '0' + carry;
        }
        carry = add/10;
        result = char('0' + add % 10) + result;
    }

    if (carry)
    {
        result = '1' + result;
    }
    return result;
}
