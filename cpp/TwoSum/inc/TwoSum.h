#pragma once

#include <vector>

namespace x
{
    class TwoSum
    {
public:
    std::vector<int> DoTwoSum(std::vector<int> nums, int target);
    std::vector<int> GetTwoSumIndices(std::vector<int> nums, int target);
    };
}
