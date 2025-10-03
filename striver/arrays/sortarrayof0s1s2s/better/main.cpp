#include <iostream>
#include <vector>

void sort0s1s2s(std::vector<int> &v)
{
    int n = v.size();

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            cnt0++;
        else if (v[i] == 1)
            cnt1++;
        else
            cnt2++;
    }

    for (int i = 0; i < cnt0; i++)
    {
        v[i] = 0;
    }
    for (int i = cnt0; i < cnt0 + cnt1; i++)
    {
        v[i] = 1;
    }
    for (int i = cnt0 + cnt1; i < n; i++)
    {
        v[i] = 2;
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