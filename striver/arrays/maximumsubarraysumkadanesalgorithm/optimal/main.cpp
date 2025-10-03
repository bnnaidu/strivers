#include <iostream>
#include <vector>
#include <climits>

int maximumSubArraySum(std::vector<int> &v)
{
    int maxsum = INT_MIN;
    int n = v.size();
    int sum = 0;
    int ansEnd = -1;
    int ansStart = -1;
    int start = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += v[i];
        // maxsum = std::max(maxsum, sum);
        if (sum > maxsum)
        {
            maxsum = sum;
            ansStart = start;
            ansEnd = i;
        }
        if (sum < 0)
            sum = 0;
    }

    for (int i = ansStart; i <= ansEnd; i++)
    {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    return maxsum;
}

int main()
{
    std::vector<int> vec = {-2, -3, 4, -1, -2, 1, 5, -3};
    std::cout << maximumSubArraySum(vec) << std::endl;

    return 0;
}