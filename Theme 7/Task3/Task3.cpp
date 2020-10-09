#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float x, y, a, c;
	cout << "x=";
	cin >> x;
	cout << "a=";
	cin >> a;
	cout << "y=";
	cin >> y;
	c = a / x;
	cout << "1 кг конфет стоит " << c << " Рублей" << endl;
	cout << y << " кг этих конфет стоят(ит) " << c * y << " Рублей";
	return 0;
}