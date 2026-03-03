#include <iostream>
#include <vector>

using namespace std;

// Demonstrates how std::vector behaves when copied into a 2D vector.
// Modifying the original vector does not affect the stored copy.
int main()
{
    vector<int> vector1 {};
    vector<int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    vector<vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Initial 2D vector values:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    // Modify the original vector AFTER it was copied into vector_2d
    vector1.at(0) = 1000;

    cout << "\nAfter modifying vector1:" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "\nvector1 contents:" << endl;
    cout << vector1.at(0) << " " << vector1.at(1) << endl;

    return 0;
}
