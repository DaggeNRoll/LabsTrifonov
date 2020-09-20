#include <iostream>,<cmath>;
using namespace std;
float sum(float a, float b) {
	return fabs(a) + fabs(b);
}
float diff(float a, float b) {
	return fabs(a) - fabs(b);
}
float mult(float a, float b) {
	return fabs(a) * fabs(b);
}
float div(float a, float b) {
	return fabs(a) / fabs(b);
}
 int main() {
	float a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "sum=" << sum(a, b)<<endl;
	cout << "difference=" << diff(a, b) << endl;
	cout << "product=" << mult(a,b) << endl;
	cout << "quotient=" << div(a, b);
	return 0;
}