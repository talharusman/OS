#include "LetterCount.h"
#include <fstream>
#include <cctype>

int LetterCount::countLetters(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return -1;
    }

    char ch;
    int count = 0;
    while (file.get(ch)) {
        if (std::isalpha(ch)) {
            count++;
        }
    }

    file.close();
    return count;
}

