#include <iostream>
#include <string>
#include <vector>

#include "my_swap.hpp"

void printVector(const std::vector<std::string> & vec)
{
    for (std::size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

void exp1(int a)
{
    a += 10;
}

void exp2(int& a)
{
    a += 10;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    {
        int max = 0;

        int x = 0;
        int y = 0;
        std::cout << "enter x and y" << std::endl;
        std::cin >> x >> y;
        if (x > y)
            max = x;
        else
            max = y;
        std::cout << "maximum is " << max << std::endl;

        int n = 100;
        int m = 0;
        std::cout << "enter m" << std::endl;
        std::cin >> m;
        if (n > m)
            max = n;
        else
            max = m;
        std::cout << "maximum is " << max << std::endl;

        int k = 20;
        int l = 1234;
        std::cout << "k=20 and l=1234" << std::endl;
        if (k > l)
            max = k;
        else
            max = l;
        std::cout << "maximum is " << max << std::endl;
    }

    {
        int x = 0;
        int y = 0;
        std::cout << "enter x and y" << std::endl;
        std::cin >> x >> y;
        std::cout << "maximum is " << max(x, y) << std::endl;

        int n = 100;
        int m = 0;
        std::cout << "enter m" << std::endl;
        std::cin >> n >> m;
        std::cout << "maximum is " << max(n, m) << std::endl;

        int l = 1234;
        int d = max(10, l);
        std::cout << "maximum is " << d << std::endl;
    }

    {
        int x = 10;
        int y = 100;
        // implement swap


        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }

    {
        int x = 13;
        std::cout << "x = " << x << std::endl;

        exp1(x);
        std::cout << "x = " << x << std::endl;

        exp2(x);
        std::cout << "x = " << x << std::endl;
    }

    {
        int x = 10;
        int y = 100;

        swap(x, y);

        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }

    return 0;
}
