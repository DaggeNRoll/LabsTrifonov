#include <iostream>

using namespace std;

int main() {
    setlocale(0, "";)
        int n, x, y;

    cout << "������� ������������� �����";
    cin >> n;

    x = n / 100;
    y = n % 10 * 10 + (n % 100) / 10;

    cout << (x == y ? "������������ �������" : "������������ �����");

    return 0;
}