#include <iostream>

using namespace std;

bool ObrPif(int a, int b, int c) {
	return (a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b);
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
	cout << (ObrPif(a, b, c) == 1 ? "Высказывание истинно" : "Высказывание ложно");

	return 0;
}