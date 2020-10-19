#include <iostream>

using namespace std;

int main() {
	int n, k, res;
	cout << "N=";
	cin >> n;
	cout << "K=";
	cin >> k;
	k %= 7;
	res = (k + n == 7) ? 7 : (k + n) % 7;
	cout << res;

	return 0;
}