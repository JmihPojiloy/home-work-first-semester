#include <iostream>

using namespace std;

/* Используя три различных цикла, трижды протабулировать функцию f(x)=sin(a*tg(x)) на интервале xЭ[-4;5], delta x = 0.43,
указав при этом превышает модуль вычисленной функции 1/pow(3, 3), или не превышает. */

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание № 3" << endl;

	//-----РЕАЛИЗАЦИЯ-----

	double A;
	cout << "Input A\n";
	cin >> A;

	double func = 0.0;			
	double x = 0.0;				
	double x1 = -4.0;
	double x2 = 5.0;
	double deltaX = 0.43;
	double conditionCheck = 1 / pow(3, 3) && func * (-1);
	
	// Cyle while

	while (x <= x2)
	{
		func = sin(A * tan(x));
		if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
		else cout << " y < 1/pow(3,3)" << endl;
		cout << "x= " << x << " y= " << func << endl;
		x += deltaX;
		cout << "-------------------" << endl;
	}

	// Cycke do-while

	do
	{
		func = sin(A * tan(x));
		if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
		else cout << " |y < 1/pow(3,3)|" << endl;
		cout << "x= " << x << " y= " << func << endl;
		x += deltaX;
		cout << "-------------------" << endl;

	} while (x <= x2);

	// Cycle for

	for (x = x1; x <= x2; x += deltaX)
	{
		func = sin(A * tan(x));
		if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
		else cout << " |y < 1/pow(3,3)|" << endl;
		cout << "x= " << x << " y= " << func << endl;
		cout << "-------------------" << endl;
	}

	//-----ТЕСТ-----

	//общий цикл для подстановки значений А от 1 до 3
	A = 1.0;

	for (A; A <= 3; A++) {
		cout << "A = " << A << endl;
		// цикл № 1
		for (x = x1; x <= x2; x += deltaX) {

			func = sin(A * tan(x));
			if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
			else cout << " |y < 1/pow(3,3)|" << endl;
			cout << "x= " << x << " y= " << func << endl;
			cout << "-------------------" << endl;
		}

		//цикл № 2
		while (x <= x2) {
			func = sin(A * tan(x));
			if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
			else cout << " |y < 1/pow(3,3)|" << endl;
			cout << "x= " << x << " y= " << func << endl;
			x += deltaX;
			cout << "-------------------" << endl;
		}

		//цикл № 3
		do
		{
			func = sin(A * tan(x));
			if (func > conditionCheck && func * (-1) > conditionCheck) cout << " |y > 1/pow(3,3)|" << endl;
			else cout << " |y < 1/pow(3,3)|" << endl;
			cout << "x= " << x << " y= " << func << endl;
			x += deltaX;
			cout << "-------------------" << endl;

		} while (x <= x2);

		cout << endl;
	}
	cout << endl;

}


