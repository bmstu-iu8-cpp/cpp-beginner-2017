#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Реализуйте программу, в которую сначала вводится набор пар, состоящих из имени и значения,
// например Joe 17 и Barbara 22. Для каждой пары занесите имя в вектор names,
// а число — в вектор scores (в соответствующие позиции, так что если names [7] =="Joe", то scores [7] ==17).
// Прекратите ввод, введя строку No more.
// Убедитесь, что каждое имя уникально, и выведите сообщение об ошибке, если имя введено дважды
// Выведите на печать все пары (имя, баллы) по одной в строке.

int main()
{
    const string first_stop_word = "No";
    const string second_stop_word = "more";

    vector<string> names;
    vector<int> ratings;

    // for (;;)
    while (true)
    {
        pair<string, string> input;
        cin >> input.first >> input.second;

        if (first_stop_word == input.first &&
            second_stop_word == input.second)
            break;

        names.push_back(input.first);
        ratings.push_back(stoi(input.second));
    }

    bool is_unique = false;
    for (int i = 0; i < names.size() && !is_unique; ++i)
    {
        for (int j = 1; j < names.size() && !is_unique; ++j)
        {
            if (i == j)
            {
                continue;
            }

            if (names[i] == names[j])
            {
                is_unique = true;
                break;
            }
        }
    }

    if (is_unique)
    {
        cout << "error!!" << endl;
    }
    else
    {
        for (int i = 0; i < ratings.size(); ++i)
        {
            cout << names[i] << " " << ratings[i] << endl;
        }
    }
    return 0;
}
