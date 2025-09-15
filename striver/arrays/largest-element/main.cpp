#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    
    int largest = arr[0];
    for(int i=1; i<5; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }
    std::cout << "largest: " << largest << std::endl;

    return 0;
}
