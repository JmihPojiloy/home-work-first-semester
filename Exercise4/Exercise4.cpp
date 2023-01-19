#include <iostream>

using namespace std;

/* 
    Определить n  первых членов рекуррентной последовательности.
    Для которой aK = (K * a|K-1)^2 - (1 / K) * a|K-3,
    a1 = 1, a2 = 0, a3 = 1 . 
    Среди n первых членов найти количество членов с четной целой частью.
*/

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание № 4" << endl;

	//-----РЕАЛИЗАЦИЯ-----

	long double a1 = 1.0;
	long double a2 = 0.0;
	long double a3 = 1.0;
	long double aK = 0.0;
	int temp = 0.0;
	int counter = 0;
	int n;

	cout << "Input n" << endl;
	cin >> n;

	for (int K = 4; K < n; K++) {

		aK += pow((K * a3), 2) - ((1 / K) * a1);
		cout << "Ak = " << aK << endl;
		temp = aK;
		a1 = a2;
		a2 = a3;
		a3 = aK;
		if ((temp % 2 == 0) && (n < 10)) counter++;
	}
	cout << "Количество первых 10 членов последовательности с четной целой частью - " << counter << endl;

	//-----ТЕСТ-----

	n = 15;
	cout << "n = " << n << endl;

	for (int K = 4; K < n; K++) {

		aK = pow((K * a3), 2) - ((1 / K) * a1);
		cout << "Ak = " << aK << endl;
		temp = aK;
		a1 = a2;
		a2 = a3;
		a3 = aK;
		if ((temp % 2 == 0) && (K < 10)) counter++;
	}
	cout << "Количество первых 10 членов последовательности с четной целой частью - " << counter << endl;

	system("pause");

}

