#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	int a, b, c, s1, s2;
	cout << "A=";
	cin >> a;
	cout << "B=";
	cin >> b;
	cout << "C=";
	cin >> c;

	s1 = a * b;
	s2 = c * c;

	cout << s1 / s2 << " �������(��)(�) ��������� �� ��������������\n";
	cout << s1 % s2 << " - ������� ��������� �����";

	return 0;
}