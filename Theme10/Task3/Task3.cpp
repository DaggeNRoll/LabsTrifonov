#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");

	unsigned int n;

	cout << "������� ����� ������������� �����:";
	cin >> n;

	bool res=(n%2==0)&&(n/100==0)&&((n%100)/10!=0);

	cout << (res == 0 ? "������������ �����" : "������������ �������");

	return 0;
}