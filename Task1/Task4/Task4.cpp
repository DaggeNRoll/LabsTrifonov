#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	float x, y;

	cout << "������� ���������� �� X: ";
	cin >> x;
	cout << "������� ���������� �� Y: ";
	cin >> y;

	if (x > 0) {
		if (y > 0) {
			cout << "����� ����������� � ������ ��������";
		}
		else {
			cout << "����� ����������� �� ������ ��������";
		}
	}
	else if (y > 0) {
		cout << "����� ����������� � �������� ��������";
	}
	else {
		cout << "����� ����������� � ������� ��������";
	}

	return 0;
}