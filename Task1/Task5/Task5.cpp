#include <iostream>
#include <cmath>

using namespace std;

bool div2(int x) {
	return (x % 2 == 0);
}

int sign(int x) {
	if (x > 0) {
		return 1;
	}
	else if (x < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
	setlocale(0, "");
	
	int x;

	cout << "������� ����� �����:";
	cin >> x;


	if (div2(x)) {
		switch (sign(x)) {
		case -1:
			cout << "������������� ������ �����";
			break;

		case 0:
			cout << "������� �����";
			break;
		case 1:
			cout << "������������� ������ �����";
			break;
		}
	}
	else {
		switch (sign(x)) {
		case -1:
			cout << "������������� �������� �����";
			break;
		case 1:
			cout << "������������� �������� �����";
			break;
		}
	}

	return 0;

}