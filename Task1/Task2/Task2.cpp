#include <iostream>

using namespace std;

int main() {
	float a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;

	float sum = max(b + c, max(a + b, a + c));

	cout << "Sum of 2 maximum numbers is " << sum;

	return 0;
}