#include <iostream>
#include<fstream>

using namespace std;

/*
    Задан числовой файл F. Найти максимум среди компонент, расположенных на четных позициях файла
    и минимум среди компонент на нечётных позициях. Все нулевые компоненты заменить значением максимума,
    а значение минимума дописать в конце файла пять раз. Файл до и после преобразований распечатать.
*/
int main()
{
    setlocale(LC_ALL, "Russian");
	cout << "Задание № 9" << endl;

	//-----РЕАЛИЗАЦИЯ-----

	const char* fileName = "F.txt";
	int N = 0;
	int min, max;
	int* arr = NULL;
	int* arrModify = NULL;

	// создаем файл в папке с проектом и заполняем его рандомными числами
	ofstream setFile(fileName);

	for (int i = 0; i <= 20; i++)
	{
		int random = rand() % 10;
		setFile << random << "\t";
	}
	setFile.close();

	//открываем поток для чтения ранее созданного файла и подсчитываем количество чисел
	//для того чтобы создать динамический массив размерностью = количество чисел
	ifstream getFile;
	getFile.open(fileName, ios::in);

	while (!getFile.eof()) 
	{
		char ch;
		while (getFile >> ch)
			N++;
	}
	getFile.close();

	getFile.open(fileName, ios::in);

	// создаем два массива в меньший считываем числа и производим обработку,
	// больший будет нужен для демонстрации нового сохраненного файла
	arr = new int[N];
	arrModify = new int[N + 5];

	cout << "\nМассив до преобразования\n";
	// считываем данные с файла
	if (!getFile.is_open())
	{
		cout << "Файл не может быть открыт\n" << endl;
	}
	else 
	{
		for (int i = 0; i < N; i++)
		{
			if (!getFile.eof())
			{
				getFile >> arr[i];
				cout << arr[i] << "  ";
			}
		}
	}
	getFile.close();

	min = arr[0];
	max = arr[0];

	// находим миимум и максимум согласно техническому заданию (ТЗ)
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] > max && i % 2 == 0) max = arr[i];
		else if (arr[i] < min && i % 2 != 0) min = arr[i];
	}

	// согласно ТЗ вместо 0 подставляем минимум
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 0) arr[i] = max;
	}

	// открываем поток на запись и записываем числа в файл согласно ТЗ
	setFile.open(fileName);

	if (!setFile.is_open()) 
	{
		cout << "Файл не может быть открыт\n" << endl;
	}
	else 
	{
		for (int i = 0; i <= N + 5; i++)
		{
			if (i < N) setFile << arr[i] << "\t";
			else setFile << min << "\t";
		}
	}
	setFile.close();

	// открываем поток, считываем данные с файла и выводим на экран
	getFile.open(fileName, ios::in);

	cout << "\nМассив после преобразования\n";

	if (!getFile.is_open())
	{
		cout << "Файл не может быть открыт\n" << endl;
	}
	else 
	{
		for (int i = 0; i < N + 5; i++)
		{
			if (!getFile.eof())
			{
				getFile >> arrModify[i];
				cout << arrModify[i] << "  ";
			}
		}
	}
	getFile.close();

	delete[]arr;
	delete[]arrModify;

	cout << endl;
}