#include <iostream>
using namespace std;

/*Ввести 3 числа A, B, C. Вывести все пары чисел одного знака.*/

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задание № 1" << endl;

	//-----------РЕАЛИЗАЦИЯ----------


	//int A, B, C;
	//cout << "Input A B C" << endl;
	//cin >> A >> B >> C;
	//cout << "A = " << A << " B = " << B << " C = " << C << endl;

	//if ((A > 0 && B > 0) || (A < 0 && B < 0)) cout << A << "\t" << B << endl;
	//if ((A > 0 && C > 0) || (A < 0 && C < 0)) cout << A << "\t" << C << endl;
	//if ((B > 0 && C > 0) || (B < 0 && C < 0)) cout << B << "\t" << C << endl;

	//-------------ТЕСТ--------------

	int d, e, r, n = 0;

	while (n < 6) {
		switch (n) {
		case 0: d = 1; e = 2; r = 3;
			break;
		case 1: d = -1; e = 2; r = 3;
			break;
		case 2: d = -1; e = -2; r = 3;
			break;
		case 3: d = -1; e = -2; r = -3;
			break;
		case 4: d = 1; e = -2; r = -3;
			break;
		case 5: d = 1; e = 2; r = -3;
			break;
		}

		cout << "A= " << d << " B= " << e << " C= " << r << endl;

		if ((d > 0 && e > 0 && r > 0) || (d < 0 && e < 0 && r < 0)) cout << d << " и " << e << " " << e << " и " << r << " " << d << " и " << r << endl;
		else if ((d > 0 && e > 0) || (d < 0 && e < 0)) cout << d << " " << e << endl;
		else if ((d > 0 && r > 0) || (d < 0 && r < 0)) cout << d << " " << r << endl;
		else if ((e > 0 && r > 0) || (e < 0 && r < 0)) cout << e << " " << r << endl;


		n++;

	}

	cout << endl;

	system("pause");

}

