#include <iostream>

int findMissingNumber(int arr[], int N)
{
    int hash[N + 1] = {0};

    for (int i = 0; i < N - 1; i++)
    {
        hash[arr[i]] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        if (hash[i] == 0)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 5};

    std::cout << findMissingNumber(arr, 5) << std::endl;

    return 0;
}