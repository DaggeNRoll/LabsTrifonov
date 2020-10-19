#include <iostream>

using namespace std;

bool NerTr(int a, int b, int c) {
	return (a<=b+c)&&(b<=a+c)&&(c<=a+b);
}

int main() {
	setlocale(0, "");

	int a, b, c;

	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	cout << (NerTr(a, b, c) == 1 ? "Высказывание истинно" : "Высказывание ложно");

	return 0;
}