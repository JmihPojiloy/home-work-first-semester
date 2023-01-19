#include <iostream>

using namespace std;

/*
	Используя три различных цикла определить значение. Суммы по формуле.   
*/

int main()
{
	setlocale(LC_ALL, "RUS");
	cout << "Задание № 2" << endl;

	////-----------РЕАЛИЗАЦИЯ----------

	const int n = 1;
	int k;
	double sum = 0.0;
	double result = 0.0;

	cout << "Input k" << endl;
	cin >> k;

	sum = 5 / (pow((n+3), 3));

	//-----Cycle While-----

	while (n != k) {

		result += sum;
		k--;
	}

	cout << "Результат вычислений циклом while =\t" << result << endl;

	//-----Cycle do-while-----
	
	result = 0.0; // обнуление результата

	cout << "Input k" << endl;
	cin >> k;
	
	do
	{
		result += sum;
		k--;

	} while (result != k);

	cout << "Результат вычислений циклом do-while =\t" << result << endl;

	//-----Cycle for-----

	result = 0.0; // обнуление результата

	cout << "Input k" << endl;
	cin >> k;

	for (int i = 1; i < k; i++)
	{
		result += sum;
	}

	cout << "Результат вычислений циклом for =\t" << result << endl;

	system("pause");

	//-----------ТЕСТЫ----------

	int tester = 5;

	for (int i = 0; i < 3; i++) {

		k = tester + i;
		result = 0.0;
		cout << "Тест при k = " << k << endl;

		while (n != k) {

			result += sum;
			k--;
		}
		cout << "Результат вычислений циклом while =\t" << result << endl;

		result = 0.0;
		k = tester + i;

		do
		{
			result += sum;
			k--;

		} while (n != k);
		cout << "Результат вычислений циклом do-while =\t" << result << endl;

		result = 0.0;
		k = tester + i;

		for (n; n < k; k--)
		{
			result += sum;
		}
		cout << "Результат вычислений циклом for =\t" << result << endl;
	}

	system("pause");
}
