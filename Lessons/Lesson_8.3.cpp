#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << boolalpha
        << (x >= -3 && x < 1 && y < 3)
        << endl;
    return 0;
}