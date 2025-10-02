#include <iostream>
#include <vector>

void reverse(std::vector<int> &v, int start, int end)
{
    while (start <= end)
    {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}

void leftRotateArrayByKPlaces(std::vector<int> &v, int k)
{
    int n = v.size();
    k = k % n;

    reverse(v, 0, k - 1);
    reverse(v, k, n - 1);
    reverse(v, 0, n - 1);
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    leftRotateArrayByKPlaces(v, 10);

    for (int it : v)
        std::cout << it << " ";
    std::cout << std::endl;

    return 0;
}