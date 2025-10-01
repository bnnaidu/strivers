#include <iostream>

int main()
{
    int arr[] = {0, 1, 0, 3, 12, 0};
    int i = 0;
    for (int j = 0; j < 6; j++)
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