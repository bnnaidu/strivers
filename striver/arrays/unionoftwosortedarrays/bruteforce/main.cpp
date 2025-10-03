#include <iostream>
#include <vector>
#include <set>

std::vector<int> unionOfTwoSortedArrays(std::vector<int> &v1, std::vector<int> &v2)
{
    int n1 = v1.size();
    int n2 = v2.size();
    std::set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(v1[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        st.insert(v2[i]);
    }
    std::vector<int> uni;
    for (int it : st)
    {
        uni.push_back(it);
    }

    return uni;
}
int main()
{
    std::vector<int> v1 = {1, 2, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2, 3, 4, 5, 6};
    std::vector<int> un = unionOfTwoSortedArrays(v1, v2);

    for (int it : un)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}