#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers {10, 20, 30};

    // Using .at() instead of [] for bounds checking
    numbers.at(0) = 100;

    for (int n : numbers) {
        cout << n << " ";
    }

    cout << endl;
    return 0;
}