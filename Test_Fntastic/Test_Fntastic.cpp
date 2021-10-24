// Test_Fntastic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int len = 0;
	string s;
	cout << "Введите строку: ";
	cin >> s;
	while (len != s.length()) {
		for (int i = len; i < s.length(); i++) {
				if (s[len] == s[i + 1]) {
					s[len] = ')';
					cout << s[len];
					break;
				}
				else {
					s[len] = '(';
					cout << s[len];
					break;
				}
		}
		len++;
	}
	system("pause");
	return 0;
}

