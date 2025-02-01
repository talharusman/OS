#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
using namespace std;

int findMissing(const vector<int>& arr) {
    int n = arr.size() + 1; // Including the missing element
    int first = arr[0];
    int last = arr[arr.size() - 1];
    int d = (last - first) / n;
    int expected_sum = ((first + last) * n) / 2;

    int actual_sum = 0;
    for (int num : arr) {
        actual_sum += num;
    }

    return expected_sum - actual_sum;
}

int main() {
    ifstream inputFile("series_input.txt");
    if (!inputFile.is_open()) {
        cout << "Unable to open input file." << endl;
        return 1;
    }

    vector<int> arr;
    int num;
    while (inputFile >> num) {
        arr.push_back(num);
    }
    inputFile.close();

    if (arr.size() < 2) {
        cout << "The series must contain at least two numbers." << endl;
        return 1;
    }

    int missingElement = findMissing(arr);

    ofstream outputFile("missing_element.txt");
    if (outputFile.is_open()) {
        outputFile << "The missing element is: " << missingElement << endl;
        outputFile.close();
        cout << "The missing element has been written to the file." << endl;
    } else {
        cout << "Unable to open output file." << endl;
    }

    return 0;
}

