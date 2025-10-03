#include <iostream>

int findMissingNumber(int arr[], int N)
{
    for (int i = 1; i <= N; i++)
    {
        int flag = false;
        for (int j = 0; j < N - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
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