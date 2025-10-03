#include <iostream>

int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int i = 0;
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }

    for (int i : arr)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}