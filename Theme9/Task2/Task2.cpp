#include <iostream>

using namespace std;

int const n = 1;

int main() {
	int k, res;
	cout << "K=";
	cin >> k;
	k %= 7;
	res = (k + n == 7) ? 7 : (k + n) % 7;
	cout << res;

	return 0;
}