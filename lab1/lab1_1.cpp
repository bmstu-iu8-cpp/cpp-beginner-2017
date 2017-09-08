#include <iostream>
#include <string>

int main()
{
    ////////////////////////////////////
    int i = -100;
    unsigned int u = 100;
    char c = 'a';
    float f = 1.4;
    bool b = false;
    double d = 1.134;
    std::string str = "some string";


    ////////////////////////////////////
    std::cout << i << std::endl;
    std::cout << f << std::endl;
    std::cout << str << std::endl;


    ////////////////////////////////////
    int num = 0;
    num = i * 100 + -32 - i;
    std::cout << num << std::endl;


    ////////////////////////////////////
    std::string name;
    std::cin >> name;
    std::string prefix = "Hello, ";
    std::string message = prefix + name + "!";
    std::cout << message << std::endl;


    ////////////////////////////////////
    std::cout << "sizeof(i) = " << sizeof(i) << std::endl;
    std::cout << "sizeof(c) = " << sizeof(c) << std::endl;
    std::cout << "sizeof(d) = " << sizeof(d) << std::endl;
    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
    std::cout << "sizeof(unsigned int) = " << sizeof(unsigned int) << std::endl;

    return 0;
}
