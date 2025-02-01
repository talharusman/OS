#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int findMissing(int arr[], int n) {
    int first = arr[0];
    int last = arr[n - 1];
    int d = (last - first) / n;
    int expected_sum = ((first + last) * (n + 1)) / 2;

    int act_sum = 0;
    for (int i = 0; i < n; i++) {
        act_sum += arr[i];
    }

    return expected_sum - act_sum;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Please provide a sequence of integers as command line arguments." << endl;
        return 1;
    }

    int n = argc - 1;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = atoi(argv[i + 1]);
    }

    int missingElement = findMissing(arr, n);

    ofstream outputFile("missing_element.txt");
    if (outputFile.is_open()) {
        outputFile << "The missing element is: " << missingElement << endl;
        outputFile.close();
        cout << "The missing element has been written to the file." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    delete[] arr;

    return 0;
}

