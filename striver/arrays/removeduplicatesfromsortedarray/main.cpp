#include <iostream>

int removeDuplicates(int arr[], int n)
{
    int i=0;

    for(int j=1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;   
        }
    }
    
    return i+1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3};
    
    int size = removeDuplicates(arr, 6);

    for(int i=0; i<size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
