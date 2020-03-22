// Copyright 2020 Rakhmatula Davudov <d.rakhmatula@mail.ru>

#ifndef INCLUDE_TASKS_HPP_
#define INCLUDE_TASKS_HPP_

#include <string>
#include <vector>

// Task 1.
float mean(const std::vector<float>& input);

// Task 2.
std::pair<float, float> minMax(const std::vector<float>& input);

// Task 3.
// Task 4.
void sort(std::vector<float>& input);

// Task 5.
bool remove_first_negative_element(const std::vector<int>& vec, int& removed_element);

// Task 6.
std::string replace(const std::string& str, const std::string& old, const std::string& new_string);

// Task 7.
std::vector<std::string> split(const std::string&, char sep);

// Task 8.
std::string join(const std::vector<std::string>&, const std::string& sep);

#endif // INCLUDE_TASKS_HPP_
