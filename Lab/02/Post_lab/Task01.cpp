#include <iostream>
#include <cstdlib>  // For atoi()
#include <cctype>   // For isdigit()
#include <limits>   // For numeric_limits

using namespace std;

bool isValidInteger(const char* str) {
    if (*str == '-' || *str == '+') str++; 
    if (*str == '\0') return false;      
    while (*str) {
        if (!isdigit(*str)) return false;   
        str++;
    }
    return true;
}

int main(int argc, char* argv[]) {
    // Error check: Ensure at least one number is provided
    if (argc < 2) {
       cout  << "Error: Please provide at least one integer as a command-line argument.\n";
        return 1;
    }

    int sum = 0;
    int count = 0;

   
    for (int i = 1; i < argc; i++) {
        if (!isValidInteger(argv[i])) {
            cout << "Error: Invalid integer input -> " << argv[i] << "\n";
            return 1;
        }

        int num = atoi(argv[i]);

        
        if (num == std::numeric_limits<int>::max() || num == std::numeric_limits<int>::min()) {
            cout  << "Error: Integer overflow detected for input -> " << argv[i] << "\n";
            return 1;
        }

        sum += num;
        count++;
    }


    double average = (count > 0) ? static_cast<double>(sum) / count : 0;
    cout << "Sum: " << sum << "\n";
    cout << "Average: " << average << "\n";

    return 0;
}

