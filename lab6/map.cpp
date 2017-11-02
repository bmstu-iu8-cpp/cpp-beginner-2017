#include <iostream>
#include <map>
#include <string>

template<class K, class V>
void printMap(const std::map<K, V>& m)
{
    for (const auto& e : m)
        std::cout << e.first << ": " << e.second << std::endl;
}

void testMap01()
{
    std::map<std::string, int> mp;
    mp["One"] = 1;
    mp["Two"] = 2;
    std::cout << "One is" << mp["One"] << std::endl;

    int two = mp["Two"];
    std::cout << "Two is" << mp["Two"] << std::endl;
}

void testMap02()
{
    std::map<std::string, int> mp =
    {
        {"One", 1},
        {"Two", 2},
        {"Three", 3},
    };
    printMap(mp);
}

void testMap03()
{
    std::map<std::string, int> mp =
    {
        {"One", 1},
        {"Two", 2},
        {"Three", 3},
    };

    std::string num;
    std::cin >> num;

    auto it = mp.find(num);
    if (it == mp.end())
        std::cout << "key " << num << " not found" << std::endl;
    else
        std::cout << num << " is " << mp[num] << std::endl;

    if (it == mp.end())
        std::cout << "key " << num << " not found" << std::endl;
    else
        std::cout << it->first << " is " << it->second << std::endl;
}
