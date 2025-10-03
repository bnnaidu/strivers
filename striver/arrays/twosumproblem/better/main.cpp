#include <iostream>
#include <vector>
#include <map>

std::vector<int> getTwoSum(std::vector<int> &v, int target)
{
    int n = v.size();
    std::map<int, int> mmap;

    for (int i = 0; i < n; i++)
    {
        int more = target - v[i];
        if (mmap.find(more) != mmap.end())
        {
            return {mmap[more], i};
        }
        mmap[v[i]] = i;
    }
    return {-1, -1};
}

int main()
{
    std::vector<int> vec = {2, 6, 5, 8, 11};
    std::vector<int> res = getTwoSum(vec, 15);

    for (int it : res)
        std::cout << it << " ";

    std::cout << std::endl;

    return 0;
}