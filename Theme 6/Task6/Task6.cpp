#include <iostream>
using namespace std;
int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	b = a * a;
	a = b * b;
	cout << "a^8=" << a * a;
	return 0;
}