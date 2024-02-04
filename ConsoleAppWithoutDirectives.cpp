#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Задание 3: Вычислить y, при y = 1 - (1/4) * sin^2(a) + cos(2) a." << endl;
    int a;
    cout << "Пожалуйста, введите a: ";
    cin >> a;
    double y = 1 - (1 / 4) * pow(sin(a), 2) + cos(2) * a;
    cout << "y = " << y << endl;
    return 0;
}
