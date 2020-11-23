#include <iostream>

using namespace std;

enum Months
{
	MONTH_JAN = 1,
	MONTH_FEB,
	MONTH_MAR,
	MONTH_APR,
	MONTH_MAY,
	MONTH_JUN,
	MONTH_JUL,
	MONTH_AUG,
	MONTH_SEP,
	MONTH_OCT,
	MONTH_NOV,
	MONTH_DEC
};

string GetMonth(Months month)
{
	switch (month)
	{
	case MONTH_JAN:
		return "������";
		break;
	case MONTH_FEB:
		return "��������";
		break;
	case MONTH_MAR:
		return "�����";
		break;
	case MONTH_APR:
		return "������";
		break;
	case MONTH_MAY:
		return "���";
		break;
	case MONTH_JUN:
		return "����";
		break;
	case MONTH_JUL:
		return "����";
		break;
	case MONTH_AUG:
		return "�������";
		break;
	case MONTH_SEP:
		return "��������";
		break;
	case MONTH_OCT:
		return "�������";
		break;
	case MONTH_NOV:
		return "������";
		break;
	case MONTH_DEC:
		return "�������";
		break;
	}
}

int main()
{
	setlocale(0, "");

	int d, m;
	cout << "������� ����� ��� � ������ ����� ������: ";
	cin >> d >> m;

	Months month = static_cast<Months>(m);

	cout << d << " " << GetMonth(month);

	return 0;
}