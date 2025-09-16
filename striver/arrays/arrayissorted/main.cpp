#include <iostream>

bool isArraySorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] >= arr[i-1])
        {
        }
        else
            return false;
    }

    return true;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 0};

    std::cout << isArraySorted(arr, 6) << std::endl;
    
    return 0;
}
