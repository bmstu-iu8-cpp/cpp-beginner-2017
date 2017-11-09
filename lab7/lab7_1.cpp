#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::string readFromFile(const std::string& filename)
{
    // открываем файл с именем filename
    // std::ifstream работает по аналогии с std::cin, только данные считываются не из консоли, а из файла
    // std::ofstream работает по аналогии с std::cout, только данные выводятся не в консоль, а записываются в файл
    // std::fstream объединяет в себе std::ifstream и std::ofstream, и работает в зависимости от второго аргумента
    std::fstream fl(filename);

    std::string str;
    // используем оператор >> для получения данных из файла
    fl >> str;

    return str;
}

void writeToFile(const std::string& filename, const std::string& data)
{
    // открываем файл с именем filename
    // второй аргумент означает, что файл для записи в него данных
    // старые данные, которые находятся в файле удалятся
    std::fstream fl(filename, std::ios::out);

    // используем оператор << для записи данных в файл
    fl << data;
}

void appendToFile(const std::string& filename, const std::string& data)
{
    // второй аргумент означает, что файл для записи в него данных
    // старые данные, которые находятся в файле останутся
    // новые данные будут добавляться в конец файла
    std::fstream fl(filename, std::ios::app);

    fl << data;
}

void vectorToFile(const std::string& filename, const std::vector<int>& data)
{
    // открывваем файл с именем filename
    // файл открывается только для записи в него данных
    // считывать данные из файла используя std::ofstream нельзя
    // когда файл открывается для записи данных, другие программы не могут читать или записывать данные в него
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
    // открывваем файл с именем filename
    // файл открывается только для чтения данных из файла
    // записывать данные в файл нельзя, используя std::ifstream, нельзя
    // зато можно читать этот файл из нескольких программ
    std::ifstream fl(filename);

    // метод fl.eof() возвращает true, если все данные из файла были считаны
    // т.е.конструкция while (!fl.eof()) означает: "читаем файл до тех пор пока есть что читать"
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
