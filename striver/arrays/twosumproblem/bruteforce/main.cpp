#include <iostream>
#include <vector>

std::string getTwoSum(std::vector<int> &v, int target)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] + v[j] == target)
            {
                return "YES";
            }
        }
    }
    return "NO";
}

int main()
{
    std::vector<int> vec = {2, 6, 5, 8, 11};
    std::cout << getTwoSum(vec, 15) << std::endl;

    return 0;
}