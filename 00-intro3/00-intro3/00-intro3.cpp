#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a;
	int b;
	setlocale(LC_ALL, "Russian");
	cout << "Введите переменную a \n";
	cin >> a;
	cout << "Введите переменную b \n";
	cin >> b;
	int res = pow((a + b), 2) + pow((a - b), 2) - (3 * a * b);
	cout << "Результат выражения (a+b)^2+(a-b)^2-3ab = " << res;
}