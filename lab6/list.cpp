#include <iostream>
#include <list>
#include <string>

template<class T>
void printList(const std::list<T>& ls)
{
    for (const T& e : ls)
        std::cout << e << ", ";
    std::cout << std::endl;
}

void testList01()
{
    std::list<int> ls = {1, 2, 3, 4, 5};
    printList(ls);

    ls.push_back(6);
    printList(ls);

    ls.push_front(0);
    printList(ls);
}

void testList02()
{
    std::list<int> ls = {1, 2, 3, 4, 5};
    printList(ls);

    ls.pop_back();
    printList(ls);

    ls.pop_front();
    printList(ls);
}


void testList03()
{
    std::list<int> ls = {1, 2, 3, 4, 5};

    std::list<int>::iterator it = ls.begin();

    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;

    ++it;
    std::cout << *it << std::endl;

    --it;
    std::cout << *it << std::endl;

    // it = ls.begin() + 1; // error
    // it += 2; // error
}

void testList04()
{
    std::list<int> ls = {1, 2, 3, 4, 5};
    printList(ls);

    auto it = ls.begin();
    ++it;
    ++it;
    ls.erase(it);
    printList(ls);
}

void testList05()
{
    std::list<int> ls = {1, 2, 3, 4, 5};
    printList(ls);

    auto it = ls.begin();
    ++it;
    ++it;

    ls.erase(ls.begin(), it);
    printList(ls);
}

void testList06()
{
    std::list<int> ls = {1, 2, 3, 4, 5};
    printList(ls);

    auto it = ls.begin();
    ls.insert(it, 1100);
    printList(ls);

    ++it;
    ++it;
    ls.insert(it, 222);
    printList(ls);
}

void testList07()
{
    std::list<int> ls = {1, 2, 1, 4, 1};
    printList(ls);

    ls.remove(1);
    printList(ls);
}
