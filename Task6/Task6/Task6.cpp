#include <iostream>
using namespace std;
int main() {
	float det, det1, det2, a1, a2, b1, b2,c1,c2;
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
	det = a1 * b2 - b1 * a2;
	if (det == 0) {
		if (a1/a2 == b1/b2 && b1/b2 == c1/c2) {
			cout << "Серий решений бесконечно много";
		}
		else {
			cout << "Решений нет";
		}
	}
	else {
		det1 = c1 * b2 - c2 * b1;
		det2 = a1 * c2 - a2 * c1;
		cout << "x = " << det1 / det << endl;
		cout << "y = " << det2 / det;
	}
	return 0;
}