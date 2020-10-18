#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	float a1, a2, b1, b2, c1, c2;
	cout << "A1 = ";
	cin >> a1;
	cout << "A2 = ";
	cin >> a2;
	cout << "B1 = ";
	cin >> b1;
	cout << "B2 = ";
	cin >> b2;
	cout << "C1 = ";
	cin >> c1;
	cout << "C2 = ";
	cin >> c2;

	float det, det1, det2;
	det = a1 * b2 - b1 * a2;
	det1 = c1 * b2 - c2 * b1;
	det2 = a1 * c2 - c1 * a2;

	if (det != 0) {
		cout << "x = " << det1 / det << endl;

		cout << "y = " << det2 / det;
	}
	else {
		if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2) {
			cout << "Бесконечно много решений";
		}
		else {
			cout << "Решений нет";
		}
	}
}