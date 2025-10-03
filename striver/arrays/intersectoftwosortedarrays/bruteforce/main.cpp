#include <iostream>
#include <vector>

std::vector<int> intersectOfTwoSortedArrays(std::vector<int> &v1, std::vector<int> &v2)
{
    int n = v1.size();
    int m = v2.size();
    int vis[m] = {0};
    std::vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v1[i] == v2[j] && vis[j] == 0)
            {
                ans.push_back(v1[i]);
                vis[j] = 1;
                break;
            }
            if (v2[j] > v1[i])
                break;
        }
    }
    return ans;
}

int main()
{
    std::vector<int> v1 = {1, 2, 2, 3, 3, 4, 5, 6};
    std::vector<int> v2 = {2, 3, 3, 5, 6, 6, 7};

    std::vector<int> res = intersectOfTwoSortedArrays(v1, v2);

    for (int it : res)
        std::cout << it << " ";
    std::cout << std::endl;
    return 0;
}