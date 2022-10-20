//Даны стороны прямоугольника a и b. Найти его площадь S = a·b и периметр P = 2·(a + b).
//Дана длина L окружности. Найти ее радиус R и площадь S круга, ограниченного этой окружностью, учитывая, что L = 2·π·R, S = π·R2.
//Дано трехзначное число. Вывести число, полученное при прочтении исходного числа справа налево.
//С начала суток прошло N секунд(N — целое). Найти количество секунд, прошедших с начала последнего часа.


#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, l;
    int n, answer;

    cout << "Находим площадь прямоугольника \n";
    cout << "Сторона прямоугольника a = "; cin >> a;
    cout << "Сторона прямоугольника b = "; cin >> b; cout << "\n";

    cout << "Находим радиус и площадь круга по длине его окружности \n";
    cout << "Длина окружности = "; cin >> l; cout << "\n";

    cout << "Находим количество секунд, прошедших с начала последнего часа \n";
    cout << "Секунд с начала суток = "; cin >> n;

    double Sp = a * b;
    double P = 2 * (a + b);
    double R = l / 2 * M_PI;
    double Sk = M_PI * (R * 2);
    answer = n % 3600;

    cout.precision(20); // определяем количество дробных знаков
    cout << "Rectangle area: " << Sp << "\n"
        << "Rectangle perimeter: " << P << "\n"
        << "Circle radius: " << R << "\n"
        << "Area of the circle: " << Sk << "\n"
        << "Секунд с начала последнего часа: " << answer << endl;
    return 0;
}