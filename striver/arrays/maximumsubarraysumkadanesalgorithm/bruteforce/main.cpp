#include <iostream>
#include <vector>
#include <climits>

int maximumSubArraySum(std::vector<int> &v)
{
    int maxsum = INT_MIN;
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k < j; k++)
            {
                sum += v[k];
                maxsum = std::max(maxsum, sum);
            }
        }
    }
    return maxsum;
}

int main()
{
    std::vector<int> vec = {-2, -3, 4, -1, -2, 1, 5, -3};
    std::cout << maximumSubArraySum(vec) << std::endl;

    return 0;
}