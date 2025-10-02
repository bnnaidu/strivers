#include <iostream>
#include <vector>
#include <array>
#include <climits>

int secondLargest(std::vector<int> &v)
{
    int largest = v[0];
    int slargest = INT_MIN;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > largest)
        {
            slargest = largest;
            largest = v[i];
        }
        else if (v[i] < largest && v[i] < slargest)
        {
            slargest = v[i];
        }
    }
    std::cout << "largest: " << largest << std::endl;
    std::cout << "slargest: " << slargest << std::endl;

    return slargest;
}

int secondSmallest(std::vector<int> &v)
{
    int smallest = v[0];
    int ssmallest = INT_MAX;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < smallest)
        {
            ssmallest = smallest;
            smallest = v[i];
        }
        else if (v[i] != smallest && v[i] < ssmallest)
        {
            ssmallest = v[i];
        }
    }
    std::cout << "smallest: " << smallest << std::endl;
    std::cout << "ssmallest: " << ssmallest << std::endl;

    return ssmallest;
}

std::array<int, 2> secondSmallestSecondLargest(std::vector<int> &v)
{
    int slargest = secondLargest(v);
    int ssmallest = secondSmallest(v);

    return {ssmallest, slargest};
}

int main()
{
    std::vector<int> v = {1, 3, 0, 4, 7, 4, 7};
    std::array<int, 2> arr = secondSmallestSecondLargest(v);

    for (int i : arr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}