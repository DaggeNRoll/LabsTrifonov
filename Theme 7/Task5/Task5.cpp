#include <iostream>
using namespace std;
int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	if (b == 0) {
		cout << "x = 0";
	}
	else {
		cout << "x = " << (-b) / a;
	}
	return 0;
}