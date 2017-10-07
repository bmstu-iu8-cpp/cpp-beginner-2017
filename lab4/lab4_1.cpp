#include <iostream>
#include <string>
#include <vector>

struct Point2
{
    float x;
    float y;
};

struct Student
{
    std::string Name;
    std::string LastName;
    std::vector<int> ratings;
};

struct Group
{
    std::string Name;
    std::vector<Student> Students;
};

int main()
{
    {
        Point2 point = {0, 0};
        std::cout << point.x << ", " << point.y << std::endl;
        std::cin >> point.x >> point.y;
        std::cout << point.x << ", " << point.y << std::endl;
    }

    {
        Point2 point = {1.f, 1.5f};
        std::cout << point.x << ", " << point.y << std::endl;
    }

    {
        Point2 pointOne = {0.f, 0.5f};
        Point2 pointTwo = {0.5f, 4.5f};

        Point2 point;
        point.x = pointOne.x + pointTwo.x;
        point.y = pointOne.y + pointTwo.y;
        std::cout << point.x << ", " << point.y << std::endl;
    }

    {
        Student anna;
        anna.Name = "Anna";
        anna.LastName = "Ivanova";
        anna.ratings = {4, 5, 5, 3};

        std::cout << anna.Name << ", " << anna.LastName << std::endl;
    }

    {
        Student anna = {
            "Anna",
            "Ivanova",
            {4, 5, 5, 3}
        };

        std::cout << anna.Name << ", " << anna.LastName << std::endl;
    }

    {
        int x = 13;
        int y = x;
        y += 10;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << x << std::endl;
    }

    {
        int x = 13;
        int& y = x;
        y += 10;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << x << std::endl;
    }

    {
        int x = 13;
        int& y = x;
        x += 10;
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << x << std::endl;
    }

    {
        Student anna = {
            "Anna",
            "Ivanova",
            {4, 5, 5, 3}
        };

        Student& ref = anna;
        ref.LastName = "Petrova";

        std::cout << "anna: " << anna.LastName << std::endl;
        std::cout << "ref: " << ref.LastName << std::endl;
    }

    {
        Student anna = {
            "Anna",
            "Ivanova",
            {4, 5, 5, 3}
        };

        const Student& ref = anna;
        // ref.LastName = "Petrova"; // error!

        std::cout << "anna: " << anna.LastName << std::endl;
        std::cout << "ref: " << ref.LastName << std::endl;
    }

    {
        Group iu811 = {"iu8-11"};

        Student anna = {
            "Anna",
            "Ivanova",
            {4, 5, 5, 3}
        };

        Student ivan = {
            "Ivan",
            "Petrov",
            {4, 5, 5, 3}
        };

        iu811.Students.push_back(anna);
        iu811.Students.push_back(ivan);

        for (int i = 0; i < iu811.Students.size(); ++i)
        {
            std::cout << "student "
                << iu811.Students[i].Name << " " << iu811.Students[i].LastName
                << " is in the " << iu811.Name << std::endl;
        }

        for (const Student& student : iu811.Students)
        {
            std::cout << "student "
                << student.Name << " " << student.LastName
                << " is in the " << iu811.Name << std::endl;
        }
    }

    return 0;
}
