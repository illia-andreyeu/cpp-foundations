#include <iostream>

using namespace std;

// Demonstrates basic value semantics in C++:
// - assignment copies values
// - arithmetic operators mutate local state
// - function parameters are passed by value by default

int arithmetic_transform(int number) {
    int original_number {number};

    number = number * 2;
    number = number + 9;
    number = number - 3;
    number = number / 2;
    number = number - original_number;
    number = number % 3;

    return number;
}

int main()
{
    // --- Assignment copies values ---
    int a {10};
    int b {0};

    b = a;        // copy value
    a = 100;      // change original

    cout << "Assignment semantics:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << " (unchanged after modifying a)" << endl;

    cout << endl;

    // --- Arithmetic operators modify local state ---
    int value {5};

    cout << "Arithmetic transformation:" << endl;
    cout << "Original value: " << value << endl;

    int result = arithmetic_transform(value);

    cout << "Result after transformation: " << result << endl;
    cout << "Value in main remains: " << value << endl;

    return 0;
}
