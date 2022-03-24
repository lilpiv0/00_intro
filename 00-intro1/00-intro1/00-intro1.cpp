#include <iostream>

using namespace std;
int main()
{
	int x = 13;
	int y = 73;
	cout << "X = " << x << "\n";
	cout << "Y = " << y << "\n";
	int symm = x + y;
	setlocale(LC_ALL, "Russian");
	cout << "Сумма x и y = " << symm << "\n";
	int ras1 = x - y;
	int ras2 = y - x;
	cout << "Разность x и y = " << ras1 << "\n";
	cout << "Разность y и x = " << ras2 << "\n";
	int del1 = x / y;
	int del2 = y / x;
	cout << "Частное от деления x на y = " << del1 << "\n";
	cout << "Частное от деления y на x = " << del2 << "\n";
	int ost1 = x % y;
	int ost2 = y % x;
	cout << "Остаток от деления x на y = " << ost1 << "\n";
	cout << "Остаток от деления y на x = " << ost2;
}