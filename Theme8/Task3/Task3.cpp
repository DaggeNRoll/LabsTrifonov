#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	unsigned int a, b;
	
	cout << "A= ";
	cin >> a;
	cout << "B= ";
	cin >> b;
	cout << a % b << " - ����� ��������� ����� ������� A";
	
	return 0;
}