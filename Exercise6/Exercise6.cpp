#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание № 6" << endl;

	//------РЕАЛИЗАЦИЯ-----

	//int row, column, elMin, elMax;
	//cout << "Input row\n";
	//cin >> row;
	//cout << "Input column\n";
	//cin >> column;
	//int** A = new int* [row];

	////инициализация и заполнение массива

	//for (int count = 0; count < row; count++) {

	//	A[count] = new int[column];
	//}

	//for (int i = 0; i <= row - 1; i++) {

	//	for (int j = 0; j <= column - 1; j++) {
	//		A[i][j] = rand() % 6;
	//	}

	//}

	//elMin = A[0][0];
	//elMax = A[0][0];

	//// вывод массива до модификации и нахождение минимального и максимального элементов
	//cout << "\nМассив до преобразования \n--------------\n " << endl;

	//for (int i = 0; i <= row - 1; i++) {

	//	for (int j = 0; j <= column - 1; j++)
	//	{
	//		// вывод массива на экран
	//		cout << A[i][j] << " ";

	//		// нахождение максимального элемента кратного 2
	//		if (A[i][j] > elMax && A[i][j] % 2 == 0) 
	//		{
	//			elMax = A[i][j];
	//		}

	//		// нахождение минимального элемента кратного 2
	//		if (A[i][j] < elMin && A[i][j] % 2 == 0) 
	//		{
	//			elMin = A[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//
	//// модификация массива и вывод его на экран
	//cout << "\nМассив после преобразования\n--------------\n " << endl;

	//for (int i = 0; i < row; i++) {

	//	for (int j = 0; j < column; j++) {
	//		// модификация согласно заданию
	//		if (A[i][j] == elMax || A[i][j] == elMin)
	//		{
	//			A[i][j] *= 2;
	//		}
	//		else A[i][j] *= 3;

	//		// вывод на экран
	//		cout << A[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//for (int count = 0; count < row; count++) {

	//	delete[] A[count];
	//}

	//-----ТЕСТ-----
	int row = 3, column = 3;

	do
	{
		int** tdMas = new int* [row];

		for (int count = 0; count < row; count++) {

			tdMas[count] = new int[column];
		}

		int elMin, elMax;

		for (int i = 0; i <= row - 1; i++) {

			for (int j = 0; j <= column - 1; j++) {
				tdMas[i][j] = rand() % 6;
			}

		}

		elMin = tdMas[0][0];
		elMax = tdMas[0][0];

		cout << "\nМассив до преобразования \n--------------\n " << endl;

		for (int i = 0; i <= row - 1; i++) {

			for (int j = 0; j <= column - 1; j++) {

				cout << tdMas[i][j] << " ";

				if (tdMas[i][j] > elMax && tdMas[i][j] % 2 == 0) {

					elMax = tdMas[i][j];
				}

				if (tdMas[i][j] < elMin && tdMas[i][j] % 2 == 0) {

					elMin = tdMas[i][j];
				}
			}

			cout << endl;
		}


		cout << "\nМассив после преобразования\n--------------\n " << endl;

		for (int i = 0; i < row; i++) {

			for (int j = 0; j < column; j++) {

				if (tdMas[i][j] == elMax || tdMas[i][j] == elMin) {
					tdMas[i][j] *= 2;
				}
				else tdMas[i][j] *= 3;
				cout << tdMas[i][j] << " ";
			}

			cout << endl;
		}

		for (int count = 0; count < row; count++) {

			delete[] tdMas[count];
		}


		row++;
		column++;

	} while (row <= 5);

	cout << endl;

}

