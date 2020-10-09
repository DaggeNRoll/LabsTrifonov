#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	unsigned int a, b, div;

	cout << "A = ";
	cin >> a;
	cout << "B  ";
	cin >> b;

	div = a / b;
	switch (div % 10) {
	case 1:
		if (div % 100 == 11) {
			cout << div << " отрезков B помещаются в отрезок A";
		}
		else {
			cout << div << " отрезок B помещается в отрезок A";
		}
		break;

	case 2:
		if (div % 100 == 12) {
			cout << div << " отрезков B помещается в отрезок A";
		}
		else {
			cout << div << " отрезка B помещаются в отрезок A";
		}
		break;

	case 3:
		if (div % 100 == 13) {
			cout << div << " отрезков B помещается в отрезок A";
		}
		else {
			cout << div << " отрезка B помещаются в отрезок A";
		}
		break;

	case 4:
		if (div % 100 == 14) {
			cout << div << " отрезков B помещается в отрезок A";
		}
		else {
			cout << div << " отрезка B помещаются в отрезок A";
		}
		break;
	default:
		cout << div << " отрезков B помещаются в отрезок A";
		break;
	}

	return 0;
}