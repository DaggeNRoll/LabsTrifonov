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
		return "€нвар€";
		break;
	case MONTH_FEB:
		return "феварал€";
		break;
	case MONTH_MAR:
		return "марта";
		break;
	case MONTH_APR:
		return "апрел€";
		break;
	case MONTH_MAY:
		return "ма€";
		break;
	case MONTH_JUN:
		return "июн€";
		break;
	case MONTH_JUL:
		return "июл€";
		break;
	case MONTH_AUG:
		return "августа";
		break;
	case MONTH_SEP:
		return "сент€бр€";
		break;
	case MONTH_OCT:
		return "окт€бр€";
		break;
	case MONTH_NOV:
		return "но€бр€";
		break;
	case MONTH_DEC:
		return "декабр€";
		break;
	}
}

int main()
{
	setlocale(0, "");

	int d, m;
	cout << "¬ведите номер дн€ и мес€ца через пробел: ";
	cin >> d >> m;

	Months month = static_cast<Months>(m);

	cout << d << " " << GetMonth(month);

	return 0;
}