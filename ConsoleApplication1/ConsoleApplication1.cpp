#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу
	cout << "x = "; cin >> x;

	A = 2 * (abs(5) - fabs(x));
	// спосіб 1: розгалуження в скороченій формі
	if (x <= -1)
		B = exp(abs(2) + fabs(x));
	if (-1 < x && x < 1)
		B = (sin(1.0) / abs(2) + fabs(x)) * (sin(1.0) / abs(2) + fabs(x));
	if (x >= 1)
		B = (cos(x) * cos(x)) / 1 + fabs(sin(x));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x <= -1)
		B = exp(abs(2) + fabs(x));
	else
		if (x >= 1)
			B = (cos(x) * cos(x)) / 1 + fabs(sin(x));
		else
			B = (sin(1.0) / abs(2) + fabs(x)) * (sin(1.0) / abs(2) + fabs(x));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
