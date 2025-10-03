#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int> &v)
{
    int max = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 1)
        {
            cnt++;
            max = max > cnt ? max : cnt;
        }
        else
        {
            cnt = 0;
        }
    }

    return max;
}

int main()
{
    std::vector<int> vec = {1, 1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1};
    std::cout << findMaxConsecutiveOnes(vec) << std::endl;

    return 0;
}