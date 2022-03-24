#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число, которые хотите ввести в квадрат \n";
	cin >> x;
	int y = pow(x, 2);
	cout << "Результат: " << y;
}