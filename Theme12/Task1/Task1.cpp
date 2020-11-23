#include <iostream>

using namespace std;
//��������� � ��������
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
//��������� � ���������� ������� � ������ ���
enum Days
{
	ONE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	ELEV,
	TWELVE,
	THIRTEEN,
	FOURTEEN,
	FIFTEEN,
	SIXTEEN,
	SEVENTEEN,
	EIGHTEEN,
	NINETEEN,
	TWENTY,
	THIRTY = 30
};
//������� ��������� ����� ������ ��� � ���������� ������������
string GetDayNumber(Days number)
{
	switch (number)
	{
	case ONE:
		return "������";
		break;
	case TWO:
		return "������";
		break;
	case THREE:
		return "������";
		break;
	case FOUR:
		return "��������";
		break;
	case FIVE:
		return "�����";
		break;
	case SIX:
		return "������";
		break;
	case SEVEN:
		return "�������";
		break;
	case EIGHT:
		return "�������";
		break;
	case NINE:
		return "�������";
		break;
	case TEN:
		return "�������";
		break;
	case ELEV:
		return "�����������";
		break;
	case TWELVE:
		return "�����������";
		break;
	case THIRTEEN:
		return "�����������";
		break;
	case FOURTEEN:
		return "�������������";
		break;
	case FIFTEEN:
		return "�����������";
		break;
	case SIXTEEN:
		return "������������";
		break;
	case SEVENTEEN:
		return "�����������";
		break;
	case EIGHTEEN:
		return "�������������";
		break;
	case NINETEEN:
		return "�������������";
		break;
	case TWENTY:
		return "���������";
		break;
	case THIRTY:
		return "���������";
		break;
	}
}
//������� ��������� ����� ������ � "����������" �����
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
//������������� ���� ������� ������ � 179-� � 185-� �������
string DevideDayNumber(int d)
{
	int tens = d / 10;//���������� ������ ����� �������������
	int units = d % 10;//���������� ������ ����� �������������
	Days day_units = static_cast<Days>(units);//���������� ������ ������������� � ��� ��������� ���
	//����������� ��� ��������� �������� �������������� ������ ���
	return (tens == 2) ? "�������� " + GetDayNumber(day_units) : "�������� " + GetDayNumber(day_units);
	//���������� �������� � ������ � ���� �������������� ������������
}

int main()
{
	setlocale(0, "");

	int d, m;
	cout << "������� ����� ��� � ������ ����� ������ (�������� ������ ���������� ���� � ������): ";
	cin >> d >> m;

	Months month = static_cast<Months>(m);//�������������� ������ ������ � ���� ���������
	//��� ���������� ���������� ��� �������� �������� ��� � ���������� ������������
	Days day = static_cast<Days>(d);
	string dayName;
	//�������, ����� �� ����������� ������ 31 ��������
	if (d > 0 && d < 21 || d == 30)
	{
		dayName = GetDayNumber(day);//���� ������� ������������ ��� ���� � ���������, �� ��� ������
//��������� � ��������� ����������
	}
	//���� ������������ ��������� (�������� ������, �������� ������), �� ��� �������������� ����������� ��������
	else
	{
		dayName = DevideDayNumber(d);
	}
	cout << dayName + " " + GetMonth(month);//����� �� ����� ����������

	return 0;
}