#include <iostream>
#include <vector>

int majorityElement(std::vector<int> v)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == v[i])
                cnt++;
        }
        if (cnt > n / 2)
            return v[i];
    }
    return -1;
}

int main()
{
    std::vector<int> vec = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    std::cout << majorityElement(vec) << std::endl;

    return 0;
}