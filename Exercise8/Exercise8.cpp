#include <iostream>

using namespace std;

/*
	-----ФУНКЦИИ-----
*/
int** Vvod2m(int** A, int N, int M) 
{
	int** B = new int* [N];

	for (int count = 0; count < N; count++)
	{
		B[count] = new int[M];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			B[i][j] = rand() % 10;
		}
	}
	return B;
};

void Vivod2m(int** A, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << A[i][j] << " ";
		}

		cout << endl;
	}
};

bool Max(int p, int q)
{
	if (p > q) return true;
	else return false;
};

int** Sozd(int** A, int** B, int** C, int N, int M)
{
	int** D = new int* [N];

	for (int count = 0; count < N; count++)
	{
		D[count] = new int[M];
	}

	for (int i = 0; i < N; i++) 
	{

		for (int j = 0; j < M; j++)
		{
			if (Max(A[i][j], B[i][j]) && Max(A[i][j], C[i][j])) D[i][j] = A[i][j];
			else if (Max(B[i][j], A[i][j]) && Max(B[i][j], C[i][j])) D[i][j] = B[i][j];
			else D[i][j] = B[i][j];
		}
	}
	return D;
};

/*
	------ОСНОВНОЙ КОД------
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Задание № 8" << endl;

	int N = 5;
	int M = 5;

	cout << "Input ROW and COLUMN\n";
	/*cin >> N >> M;*/

	int** X1 = NULL;
	int** X2 = NULL;
	int** X3 = NULL;
	int** X4 = NULL;
	int** X5 = NULL;

	X1 = Vvod2m(X1, N, M);
	cout << "\nМассив X1\n--------------\n" << endl;
	Vivod2m(X1, N, M);

	X2 = Vvod2m(X2, N, M);
	cout << "\nМассив X2\n--------------\n" << endl;
	Vivod2m(X2, N, M);

	X3 = Vvod2m(X3, N, M);
	cout << "\nМассив X3\n--------------\n" << endl;
	Vivod2m(X3, N, M);

	X4 = Sozd(X1, X2, X3, N, M);
	cout << "\nМассив X4\n--------------\n" << endl;
	Vivod2m(X4, N, M);

	X5 = Sozd(X1, X2, X4, N, M);
	cout << "\nМассив X5\n--------------\n" << endl;
	Vivod2m(X5, N, M);

	delete[]X1;
	delete[]X2;
	delete[]X3;
	delete[]X4;
	delete[]X5;

	cout << endl;
}