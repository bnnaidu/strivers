#include <iostream>

bool isPalindrome(char arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        if (arr[i] != arr[j])
            return false;
        i++;
        j--;
    }

    return true;
}
int main()
{
    char arr[] = "liril";
    std::cout << isPalindrome(arr, 5) << std::endl;

    char arr2[] = "kayal";
    std::cout << isPalindrome(arr2, 5) << std::endl;

    return 0;
}