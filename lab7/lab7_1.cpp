#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::string readFromFile(const std::string& filename)
{
    std::fstream fl(filename);

    std::string str;
    fl >> str;

    return str;
}

void writeToFile(const std::string& filename, const std::string& data)
{
    std::fstream fl(filename, std::ios::out);

    fl << data;
}

void appendToFile(const std::string& filename, const std::string& data)
{
    std::fstream fl(filename, std::ios::app);

    fl << data;
}

void vectorToFile(const std::string& filename, const std::vector<int>& data)
{
    std::ofstream fl(filename);

    for (int i = 0; i < data.size(); ++i)
    {
        fl << data[i];

        if (i < data.size() - 1)
            fl << std::endl;
    }
}


void vectorFromFile(const std::string& filename, std::vector<int>& data)
{
    std::ifstream fl(filename);

    while (!fl.eof())
    {
        int e = 0;
        fl >> e;
        data.push_back(e);
    }
}

int main()
{
    writeToFile("file.txt", "data");
    writeToFile("file.txt", "some string");
    writeToFile("file.txt", "sentence");
    appendToFile("file.txt", "some message");

    std::string data = readFromFile("file.txt");
    std::cout << data << std::endl;

    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
    vectorToFile("vec.txt", vec);

    std::vector<int> out;
    vectorFromFile("vec.txt", out);

    return 0;
}
