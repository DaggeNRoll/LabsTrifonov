#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(0, "");
	float x_a, y_a, x_b, y_b, x_c, y_c;

	cout << "x для A: ";
	cin >> x_a;
	cout << "y для A: ";
	cin >> y_a;
	cout << "x для B: ";
	cin >> x_b;
	cout << "y для B: ";
	cin >> y_b;
	cout << "x для C: ";
	cin >> x_c;
	cout << "y для C: ";
	cin >> y_c;

	float min_r;
	if (sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2)) < sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2))) {
		cout << "Ближе расположена B" << endl;
		cout << "Расстояние: " << sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));
	}
	else if ((sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2)) > sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2)))) {
		cout << "Ближе расположена C" << endl;
		cout << "Расстояние: " << sqrt(pow(x_a - x_c, 2) + pow(y_a - y_c, 2));
	}
	else {
		cout << "B и C расположены на одном расстоянии от A";
		cout << "Расстояние: " << sqrt(pow(x_a - x_b, 2) + pow(y_a - y_b, 2));
	}

	return 0;
}