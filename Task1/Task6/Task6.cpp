#include <iostream>

int Razr(unsigned int x)
{
	int i = 0;
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return i;
}

bool div2(unsigned int x) {
	return (x % 2 == 0);
}

int main()
{
	setlocale(0, "");

	unsigned int x;
	std::cout << "������� ����� ������������� ����� �� 1 �� 999:";
	std::cin >> x;

	if (div2(x))
	{
		switch (Razr(x))
		{
		case 1:
			std::cout << "׸���� ����������� �����";
			break;
		case 2:
			std::cout << "׸���� ���������� �����";
			break;
		case 3:
			std::cout << "׸���� ���������� �����";
			break;
		}
	}
	else
	{
		switch (Razr(x))
		{
		case 1:
			std::cout << "�������� ����������� �����";
			break;
		case 2:
			std::cout << "�������� ���������� �����";
			break;
		case 3:
			std::cout << "�������� ���������� �����";
			break;
		}
	}

	return 0;
}