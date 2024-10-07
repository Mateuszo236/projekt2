#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Minimalna wartość dla int: " << numeric_limits<int>::min() << '\n';
    cout << "Maksymalna wartość dla int: " << numeric_limits<int>::max() << '\n';
    return 0;
}
