//Задача 6.
//Требуется вывести значения функции f(x) = 1/x с шагом 0,1 (протабулировать) 
//на отрезке от -1,0 до 1,0. Значение x == 0, в котором функция 
//не определена, должно быть пропущено.

/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double i = -1.0;
    while (i <= 1.0) {
        if (i > -0.09 && i < +0.09) {
            i += 0.1;
            continue;
        }
        cout << "i = "
            << fixed << showpos
            << setprecision(17) << i
            << "\t" << setw(8)
            << setprecision(4) << 1 / i
            << endl;
        i += 0.1;
    }
    return 0;
}
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned a, b;

    cin >> a;
    cin >> b;

    if (a > b) {
        a = a % b;
        if (a == 0) {
            cout << b;
        }
        else {
            b = b % a;

        }
    }
    else {
        b = b % a;
        if (b == 0) {
            cout << a;
        }
        else {
            a = a % b;
            return main();
        }
    }

}