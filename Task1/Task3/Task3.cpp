#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	float x_a, y_a, x_b, y_b, x_c, y_c;

	cout << "x ��� A: ";
	cin >> x_a;
	cout << "y ��� A: ";
	cin >> y_a;
	cout << "x ��� B: ";
	cin >> x_b;
	cout << "y ��� B: ";
	cin >> y_b;
	cout << "x ��� C: ";
	cin >> x_c;
	cout << "y ��� C: ";
	cin >> y_c;

	float min_r;
	if (sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2)) < sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2))) {
		cout << "����� ����������� B" << endl;
		cout << "����������: " << sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));
	}
	else if ((sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2)) > sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2)))) {
		cout << "����� ����������� C" << endl;
		cout << "����������: " << sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2));
	}
	else {
		cout << "B � C ����������� �� ����� ���������� �� A";
		cout << "����������: " << sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));
	}

	return 0;
}