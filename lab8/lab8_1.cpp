#include <algorithm>
#include <iostream>
#include <list>
#include <random>
#include <string>
#include <vector>

template <class T>
void print(const std::vector<T>& v)
{
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////
bool great(int a, int b)
{
    return a > b;
}

void example1()
{
    std::vector<int> v = {1, 6, 1, 0, -10, 4};

    // отсортирован ли массив
    std::cout << std::is_sorted(v.begin(), v.end());

    // сортируем по возрастанию
    std::sort(v.begin(), v.end());

    // отсортирован ли массив
    std::cout << std::is_sorted(v.begin(), v.end());

    print(v);

    // сортируем по убыванию
    std::sort(v.begin(), v.end(), great);

    print(v);
}

///////////////////////////////////////////////////////////////////////////////////
bool greatLen(const std::string& a, const std::string& b)
{
    return a.size() > b.size();
}

void example2()
{
    std::vector<std::string> v = {"a", "bb", "b", "c", "ccc"};

    // сортируем по возрастанию
    std::sort(v.begin(), v.end());

    print(v);

    // сортируем по убыванию
    std::sort(v.begin(), v.end(), greatLen);

    print(v);
}

///////////////////////////////////////////////////////////////////////////////////
// возвращает true - если a нечетное
// иначе false
bool odd(int a)
{
    return a & 1;
}

void example3()
{
    std::vector<int> v = {1, 1, 6, 7, 5, 5, 5, 5, 6, 1, 0, -10, 4, 1};

    // посчитаем какое количество единиц в массиве
    int cnt = std::count(v.begin(), v.end(), 1);
    std::cout << cnt << std::endl;

    // посчитаем какое количество нечетных элементов в массиве
    // для этого используем функцию count_if
    // в качестве предиката, передаем функцию odd
    int cntOdd = std::count_if(v.begin(), v.end(), odd);
    std::cout << cntOdd << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////
bool even(int a)
{
    return !odd(a);
}

void example4()
{
    std::vector<int> v = {1, 3, 5, 7};

    // все ли элементы нечетные?
    std::cout << std::all_of(v.begin(), v.end(), odd) << std::endl;

    v.push_back(4);
    // все ли хотя бы один четный элемент?
    std::cout << std::any_of(v.begin(), v.end(), even) << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////
int pow2(int a)
{
    return a * a;
}

void example5()
{
    std::vector<int> v = {1, 3, 5, 6};

    // заменим в исходном массиве все элементы на квадрат этих значений
    std::transform(v.begin(), v.end(), v.begin(), pow2);

    for (const auto& i : v)
        std::cout << i << " ";
    std::cout << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////
void example6()
{
    std::vector<int> v = {1, 3, 5, 6, 7, 8, 9};

    // найдем в массиве -10 и заменим его на 10
    auto it = std::find(v.begin(), v.end(), -10);
    if (it == v.end())
        std::cout << "not found" << std::endl;
    else
        *it = 10;

    // найдем первое четное число и прибавим к нему 1
    auto it2 = std::find_if(v.begin(), v.end(), even);
    if (it2 == v.end())
        std::cout << "not found" << std::endl;
    else
        *it2 = (*it2) + 1;
}

///////////////////////////////////////////////////////////////////////////////////
void example7()
{
    std::vector<int> v = {3, 1, -5, 6, -7, 8, 2};

    // найдем минимум в массиве и изменим его знак
    auto itMin = std::min_element(v.begin(), v.end());
    if (itMin == v.end())
        std::cout << "vector is empty" << std::endl;
    else
        *itMin = -(*itMin);
}

///////////////////////////////////////////////////////////////////////////////////
int counter()
{
    static int cnt = 0;
    return cnt++;
}
void example8()
{
    // создаем массив из 10 элементов
    std::vector<int> v(10);

    // заполним массив значениями, которые возвращает функция counter
    std::generate(v.begin(), v.end(), counter);

    print(v);
}

// все алгоритмы стандартной библиотеки смотрите http://www.cplusplus.com/reference/algorithm/
int main()
{
    example1();
    example2();
    example3();
    example4();
    example5();
    example6();
    example7();
    example8();
    return 0;
}
