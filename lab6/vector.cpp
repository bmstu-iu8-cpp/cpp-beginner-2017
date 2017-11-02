#include <iostream>
#include <string>
#include <vector>

template<class T>
void printVector(const std::vector<T>& m)
{
    for (const auto& e : m)
        std::cout << e << ", ";
    std::cout << std::endl;
}

void testVector01()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);

    vec.pop_back();
    printVector(vec);

    vec.push_back(6);
    printVector(vec);
}

void testVector02()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << vec.front() << std::endl;

    std::cout << vec.back() << std::endl;
}

void testVector03()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::vector<int>::iterator it = vec.begin();

    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;

    --it;
    std::cout << *it << std::endl;
}


void testVector04()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);

    auto it = vec.begin() + 1;
    it += 2;

    vec.erase(it);
    printVector(vec);
}

void testVector05()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);

    auto it = vec.begin() + 1;

    vec.erase(it, it + 2);
    printVector(vec);
}

void testVector06()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    printVector(vec);

    auto it = vec.begin();
    vec.insert(it, 1100);
    printVector(vec);

    it = vec.begin();
    vec.insert(it + 2, 222);
    printVector(vec);
}
