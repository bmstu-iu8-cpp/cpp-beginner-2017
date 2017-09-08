#include <iostream>
#include <string>

int main()
{
    // if
    {
        const int right = 25;
        // right = 234; // error

        int answer = 0;
        std::cout << "5 * 5 = ?" << std::endl;
        std::cin >> answer;

        if (answer == right)
        {
            std::cout << "All right!" << std::endl;
        }
        else
        {
            std::cout << "You're looser" << std::endl;
        }
    }

    // for
    {
        unsigned int n = 0;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;

        unsigned int fact = 1;
        for (unsigned int i = 2; i <= n; ++i)
        {
            fact = fact * i;
        }

        std::cout << n << "! = " << fact << std::endl;
    }

    // while
    {
        unsigned int n = 0;
        std::cout << "Enter a number:" << std::endl;
        std::cin >> n;
        std::cout << "Summ(0..." << n << ") = ";

        unsigned int summ = 0;
        while (n != 0)
        {
            summ += n;
            n--;
        }

        std::cout << summ << std::endl;
    }

    // do while
    {
        const int right = 25;

        int answer = 0;
        do
        {
            std::cout << "5 * 5 = ?" << std::endl;
            std::cin >> answer;
        } while (answer != right);

        std::cout << "All right!" << std::endl;
    }

    return 0;
}
