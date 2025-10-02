#include <iostream>

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void print2(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }
}

void print3(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            std::cout << j << " ";
        std::cout << std::endl;
    }   
}

int main()
{
    int t;
    std::cin >> t;
    for(int i=0; i<t; i++)
    {
        int n;
        std::cin >> n;
     //   print1(n);
     //   print2(n);
        print3(n);
    }
    std::cout << std::endl;

    return 0;
}
