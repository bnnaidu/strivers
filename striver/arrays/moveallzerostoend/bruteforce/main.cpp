#include <iostream>

int main()
{
    int arr[] = {0, 1, 0, 3, 12, 0};
    int target[6] = {0};

    int j = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] != 0)
        {
            target[j] = arr[i];
            j++;
        }
    }

    for (int i = 0; i < 6; i++)
        arr[i] = target[i];

    for (int i = 0; i < 6; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}