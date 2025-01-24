#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Add last digit
        num /= 10;       // Remove last digit
    }
    return sum;
}

int main() {
    int inputNumber;

    // Taking user input
    cout << "Enter a number: ";
    cin >> inputNumber;

    // Step 1: Calculate the sum of digits of the input number
    int sum1 = sumOfDigits(inputNumber);

    // Step 2: Add 23
    int result = sum1 + 23;

    // Step 3: Add the last digit of the input number
    int lastDigit = inputNumber % 10; // Extracting the last digit
    result += lastDigit;

    // Output the final result
    cout << "Final result: " << result << endl;

    return 0;
}
