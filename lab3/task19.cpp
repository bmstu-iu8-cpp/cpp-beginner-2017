#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
        for (const string& s : names)
            cout << s << " ";

        for (int r : ratings)
            cout << r << " ";
    }
    return 0;
}
