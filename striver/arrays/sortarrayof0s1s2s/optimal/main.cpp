#include <iostream>
#include <vector>

void sort0s1s2s(std::vector<int> &v)
{
    int n = v.size();
    int left = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            std::swap(v[left], v[mid]);
            left++;
            mid++;
        }
        else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            std::swap(v[mid], v[high]);
            high--;
        }
    }
}

int main()
{
    std::vector<int> vec = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0};
    sort0s1s2s(vec);

    for (int it : vec)
        std::cout << it << " ";

    std::cout << std::endl;
    return 0;
}