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
			cout << div << " �������� B ���������� � ������� A";
		}
		else {
			cout << div << " ������� B ���������� � ������� A";
		}
		break;

	case 2:
		if (div % 100 == 12) {
			cout << div << " �������� B ���������� � ������� A";
		}
		else {
			cout << div << " ������� B ���������� � ������� A";
		}
		break;

	case 3:
		if (div % 100 == 13) {
			cout << div << " �������� B ���������� � ������� A";
		}
		else {
			cout << div << " ������� B ���������� � ������� A";
		}
		break;

	case 4:
		if (div % 100 == 14) {
			cout << div << " �������� B ���������� � ������� A";
		}
		else {
			cout << div << " ������� B ���������� � ������� A";
		}
		break;
	default:
		cout << div << " �������� B ���������� � ������� A";
		break;
	}

	return 0;
}