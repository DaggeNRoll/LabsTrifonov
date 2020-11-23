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
	std::cout << "Введите целое положительное число от 1 до 999:";
	std::cin >> x;

	if (div2(x))
	{
		switch (Razr(x))
		{
		case 1:
			std::cout << "Чётное однозначное число";
			break;
		case 2:
			std::cout << "Чётное двузначное число";
			break;
		case 3:
			std::cout << "Чётное трёхзначное число";
			break;
		}
	}
	else
	{
		switch (Razr(x))
		{
		case 1:
			std::cout << "Нечётное однозначное число";
			break;
		case 2:
			std::cout << "Нечётное двузначное число";
			break;
		case 3:
			std::cout << "Нечётное трёхзначное число";
			break;
		}
	}

	return 0;
}