#include <iostream>
#include <vector>

int majorityElement(std::vector<int> v)
{
    int n = v.size();
    int cnt = 0;
    int el = 0;

    for (int i = 0; i < n; i++)
    {
        if (cnt == 0)
        {
            cnt = 1;
            el = v[i];
        }
        else if (v[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }

    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == el)
            cnt1++;
    }
    if (cnt1 > n / 2)
        return el;

    return -1;
}

int main()
{
    std::vector<int> vec = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    std::cout << majorityElement(vec) << std::endl;

    return 0;
}