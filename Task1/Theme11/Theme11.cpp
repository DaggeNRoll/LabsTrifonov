#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	if (a != b)
	{
		a = b = max(a, b);
	}
	else
	{
		a = b = 0;
	}

	cout << a << endl;
	cout << b << endl;

	return 0;
}