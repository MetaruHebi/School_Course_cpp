//#include <iostream>
//using namespace std;
//
//int main() {
//    double x, y;
//    cout << "x = "; cin >> x;
//    cout << "y = "; cin >> y;
//    cout << boolalpha
//        << (x * x + (y + 1) * (y + 1) < 25 &&
//            x * x + (y + 1) * (y + 1) > 9 &&
//            y > 1)
//        << endl;
//    return 0;
//}

/*
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, y, a, i = 1;
    cout << "Введите количество тестов ";
    cin >> a;

    for ( ; i <= a; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << x + y << "\n";

    }
    return 0;
}
*/
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    double x1, x2;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    double d = b * b - 4 * a * c;

    if (a != 0) {

        if (d > 0) {
        x1 = (-b - sqrt(d)) / 2 / a;
        x2 = (-b + sqrt(d)) / 2 / a;
        cout << x1
            << " " << x2
            << endl;
        }
        else {
            if (d == 0) {
            x1 = -b / 2 / a;
            cout << x1 << " " << x1 << endl;
            }
            else {
            cout << "No real roots"
                << endl;
            }
        }

    }

    return 0;
} */

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    unsigned long long n;
    unsigned k;
    bool f = false; // Предположим, что такой цифры нет
    cout << "n = "; cin >> n; //1673
    cout << "k = "; cin >> k; //9
    while (n != 0) {
        if (n % 10 == k) {
            f = true;
            break; // Если нашли, то выходим
        }
        n /= 10;
    }
    if (f)
        cout << "Цифра " << k << " есть";
    else
        cout << "Цифры " << k << " нет";
    cout << " в этом числе" << endl;
    return 0;
}