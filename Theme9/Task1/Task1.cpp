#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	
	int m, s, n;
	cout << "N=";
	cin >> n;
	m = n / 60;
	s = n % (m * 60);
	cout << "— начал последней минуты прошло ";
	cout << s << " секунд(а)";
	
	return 0;
}