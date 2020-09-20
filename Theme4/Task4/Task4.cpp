#include <iostream>;
using namespace std;
float sum(float a, float b) {
	return a * a + b * b;
}
float diff(float a, float b) {
	return a * a - b * b;
}
float mult(float a, float b) {
	return a * a * b * b;
}
float div(float a, float b) {
	return (a * a) / (b * b);
}
int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "sqr(a) + sqr(b)=" << sum(a, b) << endl;
	cout << "sqr(a) - sqr(b)=" << diff(a, b) << endl;
	cout << "sqr(a) * sqr(b)=" << mult(a, b) << endl;
	cout << "sqr(a)/sqr(b)=" << div(a, b);
	return 0;
}