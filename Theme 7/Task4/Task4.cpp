#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUS");
	float v1, v2, t, s, s1,vs;
	cout << "v1=";
	cin >> v1;
	cout << "v2=";
	cin >> v2;
	cout << "t=";
	cin >> t;
	cout << "s=";
	cin >> s;
	vs = v1 + v2;
	cout << "Через " << t << " часов расстояние между автомобилями составит ";
	cout << s + vs * t << " км";
	return 0;
}