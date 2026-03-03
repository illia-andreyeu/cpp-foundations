#include <iostream>
#include <vector>

using namespace std;

// Demonstrates returning std::vector from a function,
// modifying elements safely using .at(),
// and iterating with a range-based for loop.
vector<int> use_vector() {
    vector<int> vec {10, 20, 30, 40, 50};

    // Modify first and last elements using bounds-checked access
    vec.at(0) = 100;
    int last_index = vec.size() - 1;
    vec.at(last_index) = 1000;

    return vec;
}

int main()
{
    vector<int> v = use_vector();

    cout << "Vector contents: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
