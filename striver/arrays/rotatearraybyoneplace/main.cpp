#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp = arr[0];

    for(int i=1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    
    arr[n-1] = temp;

    for(int i=0; i<n; i++)
        std::cout << arr[i] << " ";

    std::cout << std::endl;

    return 0;
}
