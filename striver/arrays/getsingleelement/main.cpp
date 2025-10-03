#include <iostream>
#include <vector>

int getSingleElement(std::vector<int> &v)
{
    int xorr = 0;
    for (int i = 0; i < v.size(); i++)
    {
        xorr = xorr ^ v[i];
    }
    return xorr;
}

int main()
{
    std::vector<int> vec = {1, 1, 2, 3, 3, 4, 4};
    std::cout << getSingleElement(vec) << std::endl;

    return 0;
}