#include "../inc/TwoSum.h"

#include <unordered_map>

using namespace x;

std::vector<int> TwoSum::DoTwoSum(std::vector<int> nums, int target)
{
    std::unordered_map<int, int> m;
    std::vector<int> result;

    for (size_t i=0; i<nums.size(); i++)
    {
        if (m.find(target - nums[i]) == m.end())
        {
            m[nums[i]] = i;
        }
        else
        {
            result.push_back(target-nums[i]);
            result.push_back(nums[i]);
            // result.push_back(m[target - nums[i]]);
            // result.push_back(i);
        }
    }
    return result;
}

std::vector<int> TwoSum::GetTwoSumIndices(std::vector<int> nums, int target)
{
    std::unordered_map<int, int> m;
    std::vector<int> result;

    for (size_t i=0; i<nums.size(); i++)
    {
        if (m.find(target - nums[i]) == m.end())
        {
            m[nums[i]] = i;
        }
        else
        {
            result.push_back(m[target - nums[i]]);
            result.push_back(i);
        }
    }
    return result;
}
