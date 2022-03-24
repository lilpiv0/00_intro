#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int a; int b; int c; int d; 
	setlocale(LC_ALL, "Russian");
	cout << "Введите переменную a \n"; cin >> a;
	cout << "Введите переменную b \n"; cin >> b;
	cout << "Введите переменную c \n"; cin >> c;
	cout << "Введите переменную d \n"; cin >> d;
	int res1 = pow((a + b), 3); int res2 = pow((c - d), 4);
	cout << res1 << " "; cout << res2 << "\n";
	int res3 = pow((a + (2 * a * b) + b), 2); int res4 = pow((c - (3*c*pow(d, 2)) + 5), 2); int res5 = 6 * pow((pow(b, 2) - (4 * a * c)), 2);
	cout << res3 << " "; cout << res4 << " "; cout << res5;
}