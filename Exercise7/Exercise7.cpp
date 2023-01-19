#include <iostream>

using namespace std;

/*
	S = ((tg((PI * x) + f1) + tg((PI * y) + f2)) / tg (PI * w)) * ctg(PI * z + f3);
	Дважды вычислить значение выражения, первый раз используя процедуру, а второй – функцию.
*/

const double PI = 3.14;

double FunctionS(double x, double y, double z, double w, double f1, double f2, double f3) {

	return ((tan(PI * x + f1) + tan(PI * y + f2)) / tan(PI * w)) * (1 / tan(PI * z + f3));

};

int main() 
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание № 7" << endl;

	// ------РЕАЛИЗАЦИЯ-----

	double x, y, z, w;
	cout << "Input X Y Z W\n";
	cin >> x >> y >> z >> w;

	double f1, f2, f3;
	cout << "Input F1 F2 F3\n";
	cin >> f1 >> f2 >> f3;

	double S;

	cout << "\nПроцедурное вычисление\n----------" << endl;
	S = ((tan(PI * x + f1) + tan(PI * y + f2)) / tan(PI * w)) * (1 / tan(PI * z + f3));
	cout << "\nS= " << S << endl;

	cout << "\nВычисление с помощью функции\n----------" << endl;
	S = FunctionS(x, y, z, w, f1, f2, f3);
	cout << "\nS= " << S << endl;

	//-----ТЕСТ-----
	x = 0.5, y = 0.6, z = 0.7, w = 0.8, f1 = 0.9, f2 = 1.0, f3 = 1.1;

	for (int i = 0; i < 3; i++) {

		cout << "\nПроцедурное вычисление\n----------" << endl;
		S = ((tan(PI * x + f1) + tan(PI * y + f2)) / tan(PI * w)) * (1 / tan(PI * z + f3));
		cout << "\nS= " << S << endl;
		cout << "\nВычисление с помощью функции\n----------" << endl;
		S = FunctionS(x, y, z, w, f1, f2, f3);
		cout << "\nS= " << S << endl;

		x += 0.1;
		y += 0.1;
		z += 0.1;
		w += 0.1;
		f1 += 0.1;
		f2 += 0.1;
		f3 += 0.1;

		cout << endl;
	}

	cout << endl;
	system("pause");

	return 0;
}

