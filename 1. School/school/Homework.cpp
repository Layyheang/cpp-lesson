#include <iostream>

// Function to calculate factorial
unsigned long long calculateFactorial(int number) {
    if (number == 0 || number == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= number; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() {
    // Ask the user for a positive number
    int user_input;
    std::cout << "Enter a positive number: ";
    std::cin >> user_input;

    // Validate if the input is a positive number
    if (user_input < 0) {
        std::cout << "Please enter a positive number." << std::endl;
        return 1;
    }

    // Calculate and print the factorial
    unsigned long long factorial_result = calculateFactorial(user_input);
    std::cout << "The factorial of " << user_input << " is: " << factorial_result << std::endl;

    return 0;
}