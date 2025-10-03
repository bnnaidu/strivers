#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::string getTwoSum(std::vector<int> &v, int target)
{
    int n = v.size();
    std::sort(v.begin(), v.end());
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        int sum = v[left] + v[right];
        if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
        else
            return "YES";
    }
    return "NO";
}

int main()
{
    std::vector<int> vec = {2, 6, 5, 8, 11};
    std::cout << getTwoSum(vec, 14) << std::endl;

    return 0;
}