#include <iostream>

int findMissingNumber(int arr[], int N)
{
    int sum = N * (N + 1) / 2;
    int sum2 = 0;
    for (int i = 0; i < N - 1; i++)
        sum2 += arr[i];

    return sum - sum2;
}

int main()
{
    int arr[] = {1, 2, 4, 5};

    std::cout << findMissingNumber(arr, 5) << std::endl;

    return 0;
}