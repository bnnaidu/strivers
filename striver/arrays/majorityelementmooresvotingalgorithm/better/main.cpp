#include <iostream>
#include <vector>
#include <unordered_map>

int majorityElement(std::vector<int> v)
{
    int n = v.size();
    std::unordered_map<int, int> umap;

    for (int i = 0; i < n; i++)
    {
        umap[v[i]]++;
    }

    for (const auto &it : umap)
    {
        if (it.second > n / 2)
            return it.first;
    }

    return -1;
}

int main()
{
    std::vector<int> vec = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    std::cout << majorityElement(vec) << std::endl;

    return 0;
}