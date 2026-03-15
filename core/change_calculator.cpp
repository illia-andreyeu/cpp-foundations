#include <iostream>

using namespace std;

// Simple program that breaks an amount of cents into coins.
// Demonstrates integer division and modulo operator, and an alternative without modulo.

const int DOLLAR_VALUE = 100;
const int QUARTER_VALUE = 25;
const int DIME_VALUE = 10;
const int NICKEL_VALUE = 5;

void print_change(int dollars, int quarters, int dimes, int nickels, int pennies, const string& label) {
    cout << "\n" << label << ":\n";
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;
}

void calculate_change_with_modulo(int cents) {
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    dollars = cents / DOLLAR_VALUE;
    cents %= DOLLAR_VALUE;

    quarters = cents / QUARTER_VALUE;
    cents %= QUARTER_VALUE;

    dimes = cents / DIME_VALUE;
    cents %= DIME_VALUE;

    nickels = cents / NICKEL_VALUE;
    cents %= NICKEL_VALUE;

    pennies = cents;

    print_change(dollars, quarters, dimes, nickels, pennies, "With modulo");
}

void calculate_change_without_modulo(int cents) {
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    dollars = cents / DOLLAR_VALUE;
    cents = cents - (dollars * DOLLAR_VALUE);

    quarters = cents / QUARTER_VALUE;
    cents = cents - (quarters * QUARTER_VALUE);

    dimes = cents / DIME_VALUE;
    cents = cents - (dimes * DIME_VALUE);

    nickels = cents / NICKEL_VALUE;
    cents = cents - (nickels * NICKEL_VALUE);

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
