#include <iostream>
#include <vector>
#include <set>

int removeDuplicatesFromSortedArray(std::vector<int>& v)
{
    std::set<int> unique;
    
    for(int it : v)
        unique.insert(it);

    int i=0;
    for(int it : unique)
    {
        v[i] = it;
        i++;
    }
    return i;
}

int main()
{
    std::vector<int> v = {1, 1, 2, 2, 2, 3, 3};
    int size = removeDuplicatesFromSortedArray(v);

    for(int i=0; i<size; i++)
    {
        std::cout << v[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
