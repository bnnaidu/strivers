#include <iostream>
#include <vector>

void leftrotatebykplaces(std::vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;
    std::vector<int> temp;

    for (int i = 0; i < k; i++)
        temp.push_back(v[i]);

    for (int i = k; i < n; i++)
        v[i - k] = v[i];

    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        v[i] = temp[j];
        j++;
    }
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    leftrotatebykplaces(v, 9);

    for (int it : v)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}