#include <iostream>;
using namespace std;
float P(float a, float b) {
	return 2 * (a + b);
}
float S(float a, float b) {
	return a * b;
}
int main() {
	float a, b;
	cout << "Enter unparallel sides of the rectangle" << endl;
	cout <<"a="; 
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "P=" << P(a, b) << endl;
	cout << "S=" << S(a, b) << endl;
	return 0;
}