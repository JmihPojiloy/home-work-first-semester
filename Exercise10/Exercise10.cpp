#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    cout << "\nЗадание № 10" << endl;

	//-----РЕАЛИЗАЦИЯ----
	string word;

	getline(cin, word);

	cout << "\nДо преобразования - " << word << endl;

	reverse(word.begin(), word.end());

	cout << "\nПосле преобразования - " << word << endl;

	//-----ТЕСТ-----

	for (int i = 0; i < 3; i++)
	{
		getline(cin, word);

		cout << "\nДо преобразования - " << word << endl;

		reverse(word.begin(), word.end());

		cout << "\nПосле преобразования - " << word << endl;
	}

}
