#include <iostream>

using namespace std;

// Simple program that breaks an amount of cents into coins.
// Demonstrates integer division and modulo operator.

int main() {

    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int cents {};

    cout << "Enter an amount in cents: ";
    cin >> cents;

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

    cout << "\nChange can be given as:\n";
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    return 0;
}
