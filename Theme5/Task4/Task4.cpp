#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x1, y1, x2, y2, a, b;
	cout << "x1=";
	cin >> x1;
	cout << "y1=";
	cin >> y1;
	cout << "x2=";
	cin >> x2;
	cout << "y2=";
	cin >> y2;
	a = fabsf(x1 - x2);//S=|x1-x2|
	b = fabsf(y1 - y2);
	cout << "P=" << 2 * (a + b)<<endl;
	cout << "S=" << a * b;
}