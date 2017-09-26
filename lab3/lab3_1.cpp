#include <iostream>
#include <string>
#include <vector>

int main()
{
    // static array
    {
        int array[10] = {0};
        for (int i = 0; i < 10; ++i)
        {
            array[i] = rand();
        }

        for (int i = 0; i < 10; ++i)
        {
            std::cout << array[i] << " ";
        }
        std::cout << std::endl;
    }

    // vector
    {
        int N = 0;
        std::cin >> N;

        std::vector<int> v1(N);
        for (int i = 0; i < v1.size(); ++i)
        {
            v1[i] = rand();
        }

        for (int i = 0; i < v1.size(); ++i)
        {
            std::cout << v1[i] << " ";
        }
        std::cout << std::endl;
    }

    // vector
    {
        int N = 0;
        std::cin >> N;

        std::vector<int> v1;
        for (int i = 0; i < N; ++i)
        {
            v1.push_back(rand());
        }

        for (int i = 0; i < v1.size(); ++i)
        {
            std::cout << v1[i] << " ";
        }
        std::cout << std::endl;
    }

    // vector
    {
        std::vector<float> v1 = {1.2, 2.5, 3.4, 6.1};
        float summ = 0;
        for (int i = 0; i < v1.size(); ++i)
        {
            summ += v1[i];
        }
        std::cout << summ << std::endl;
    }

    // string
    {
        // Сможешь ли ты законсервировать консервы так,
        // как может законсервировать консервы работник консервного завода?
        std::string str = "Can you can a can as a canner can can a can?";

        std::size_t len = str.size();
        std::cout << "string length is " << len << std::endl;

        if (len == str.length())
            std::cout << "str.size() is equal str.length()" << std::endl;

        std::size_t index = str.find("can");
        std::cout << index << std::endl;

        index = str.find("abracadabra");
        if (index == std::string::npos)
            std::cout << "abracadabra not found" << std::endl;

        str.replace(0, 3, "CAN");
        std::cout << str << std::endl;
    }

    return 0;
}
