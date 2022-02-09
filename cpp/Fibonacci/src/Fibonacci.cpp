#include "../inc/Fibonnaci.h"

using namespace x;

unsigned int Fibonacci::GetFibonacci(unsigned int n)
{
    if (n<2) return n;
    // Recursion
    return GetFibonacci(n-1) + GetFibonacci(n-2);
}

unsigned int Fibonacci::GetFibonacci_1(unsigned int n)
{
    if (n<2) return n;

    int first=0, second=1;
    for (n-=1; n>0; n--)
    {
        second += first;
        first = second - first;
    }
    return second;
}
