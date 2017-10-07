#include "my_swap.hpp"

void swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void swap(std::string& a, std::string& b)
{
    std::string tmp = a;
    a = b;
    b = tmp;
}
