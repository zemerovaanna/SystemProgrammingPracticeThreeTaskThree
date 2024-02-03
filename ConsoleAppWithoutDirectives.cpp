#include <iostream>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Вычисление значения у, при у = 1 - (1/4) * sin^2(2) * a + cos(2)a:" << endl;
	double a;
	cout << "Пожалуйста, введите а:";
	cin >> a;
	double y = 1 - 1 / 4 * pow(sin(2), 2) * a + cos(2) * a;
	cout << "y = " << y;
	return 0;
}