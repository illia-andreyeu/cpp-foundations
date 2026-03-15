#include <iostream>

using namespace std;

// Simple program that breaks an amount of cents into coins.
// Demonstrates integer division and modulo operator, and an alternative without modulo.

void print_change(int dollars, int quarters, int dimes, int nickels, int pennies, const string& label) {
    cout << "\n" << label << ":\n";
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;
}

void calculate_change_with_modulo(int cents) {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};

    dollars = cents / dollar_value;
    cents %= dollar_value;

    quarters = cents / quarter_value;
    cents %= quarter_value;

    dimes = cents / dime_value;
    cents %= dime_value;

    nickels = cents / nickel_value;
    cents %= nickel_value;

    pennies = cents;

    print_change(dollars, quarters, dimes, nickels, pennies, "With modulo");
}

void calculate_change_without_modulo(int cents) {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int dollars {};
    int quarters {};
    int dimes {};
    int nickels {};
    int pennies {};

    dollars = cents / dollar_value;
    cents = cents - (dollars * dollar_value);

    quarters = cents / quarter_value;
    cents = cents - (quarters * quarter_value);

    dimes = cents / dime_value;
    cents = cents - (dimes * dime_value);

    nickels = cents / nickel_value;
    cents = cents - (nickels * nickel_value);

    pennies = cents;

    print_change(dollars, quarters, dimes, nickels, pennies, "Without modulo");
}

int main() {
    int cents {};

    cout << "Enter an amount in cents: ";
    cin >> cents;

    calculate_change_with_modulo(cents);
    calculate_change_without_modulo(cents);

    return 0;
}
