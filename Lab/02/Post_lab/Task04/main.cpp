#include <iostream>
#include "LetterCount.h"
#include "WordCount.h"
#include "LineCount.h"

int main() {
    const std::string filename = "textfile.txt";

    LetterCount letterCounter;
    WordCount wordCounter;
    LineCount lineCounter;

    int letterCount = letterCounter.countLetters(filename);
    int wordCount = wordCounter.countWords(filename);
    int lineCount = lineCounter.countLines(filename);

    if (letterCount == -1 || wordCount == -1 || lineCount == -1) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    std::cout << "Number of letters: " << letterCount << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;
    std::cout << "Number of lines: " << lineCount << std::endl;

    return 0;
}

