#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float x1, x2, x3, y1, y2, y3, a, b, c, p;
	cout << "x1=";
	cin >> x1;
	cout << "x2=";
	cin >> x2;
	cout << "x3=";
	cin >> x3;
	cout << "y1=";
	cin >> y1;
	cout << "y2=";
	cin >> y2;
	cout << "y3=";
	cin >> y3;
	a = sqrtf((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	//R=sqrt((x1-x2)^2 + (y1-y2)^2)  
	b = sqrtf((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	c = sqrtf((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	cout << "P=" << a + b + c << endl;
	p = (a+b+c )/ 2;
	cout << "S=" << sqrtf(p * (p - a) * (p - b) * (p - c));//формула Герона
	return 0;
}