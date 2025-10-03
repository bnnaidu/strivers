#include <iostream>
#include <vector>

std::vector<int> unionSortedArray(std::vector<int> v1, std::vector<int> v2)
{
    int n1 = v1.size();
    int n2 = v2.size();
    int i = 0, j = 0;
    std::vector<int> unionArray;
    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            if (unionArray.size() == 0 || unionArray.back() != v1[i])
            {
                unionArray.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (unionArray.size() == 0 || unionArray.back() != v2[j])
            {
                unionArray.push_back(v2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArray.size() == 0 || unionArray.back() != v1[i])
        {
            unionArray.push_back(v1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArray.size() == 0 || unionArray.back() != v2[j])
        {
            unionArray.push_back(v2[j]);
        }
        j++;
    }
    return unionArray;
}

int main()
{
    std::vector<int> v1 = {1, 2, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2, 3, 4, 5, 6};

    std::vector<int> uni = unionSortedArray(v1, v2);

    for (int it : uni)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}