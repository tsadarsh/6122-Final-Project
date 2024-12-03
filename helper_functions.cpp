#include "helper_functions.hpp"


std::vector<std::string> parseInputCmd(std::string str)
{
    std::stringstream ss(str);
    std::string word;
    std::vector<std::string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    return words;
}