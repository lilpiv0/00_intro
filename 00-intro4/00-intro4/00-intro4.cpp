#include <cmath>
#include <iostream>
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
int s1 = pow(a, 2) - b; int s2 = 4 * a * pow(b,2); int s3 = pow(a, 3) - 5;
int res = pow(s1, 2) - s2 + (4 * pow(s3,2));
cout << "Результат выражения (a^2-b)^2 - 4ab^2 + 4(a^3-5)^2 = " << res;
}