#include <iostream>

using namespace std;
//структура с месяцами
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
//структура с возможными цифрами в номере дня
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
//функция переводит часть номера дня в порядковое числительное
string GetDayNumber(Days number)
{
	switch (number)
	{
	case ONE:
		return "первое";
		break;
	case TWO:
		return "второе";
		break;
	case THREE:
		return "третье";
		break;
	case FOUR:
		return "четвёртое";
		break;
	case FIVE:
		return "пятое";
		break;
	case SIX:
		return "шестое";
		break;
	case SEVEN:
		return "седьмое";
		break;
	case EIGHT:
		return "восьмое";
		break;
	case NINE:
		return "девятое";
		break;
	case TEN:
		return "десятое";
		break;
	case ELEV:
		return "одинадцатое";
		break;
	case TWELVE:
		return "двенадцатое";
		break;
	case THIRTEEN:
		return "тринадцатое";
		break;
	case FOURTEEN:
		return "четырнадцатое";
		break;
	case FIFTEEN:
		return "пятнадцатое";
		break;
	case SIXTEEN:
		return "шестнадцатое";
		break;
	case SEVENTEEN:
		return "семнадцатое";
		break;
	case EIGHTEEN:
		return "восемнадцатое";
		break;
	case NINETEEN:
		return "девятнадцатое";
		break;
	case TWENTY:
		return "двадцатое";
		break;
	case THIRTY:
		return "тридцатое";
		break;
	}
}
//функция переводит номер месяца в "письменную" форму
string GetMonth(Months month)
{
	switch (month)
	{
	case MONTH_JAN:
		return "января";
		break;
	case MONTH_FEB:
		return "февараля";
		break;
	case MONTH_MAR:
		return "марта";
		break;
	case MONTH_APR:
		return "апреля";
		break;
	case MONTH_MAY:
		return "мая";
		break;
	case MONTH_JUN:
		return "июня";
		break;
	case MONTH_JUL:
		return "июля";
		break;
	case MONTH_AUG:
		return "августа";
		break;
	case MONTH_SEP:
		return "сентября";
		break;
	case MONTH_OCT:
		return "октября";
		break;
	case MONTH_NOV:
		return "ноября";
		break;
	case MONTH_DEC:
		return "декабря";
		break;
	}
}
//необходимость этой функции смотри в 179-й и 185-й строках
string DevideDayNumber(int d)
{
	int tens = d / 10;//получается первое слово числительного
	int units = d % 10;//получается второе слово числительного
	Days day_units = static_cast<Days>(units);//количество единиц преобразуется в тип структуры для
	//дальнейшего его обработки функцикй преобразования номера дня
	return (tens == 2) ? "двадцать " + GetDayNumber(day_units) : "тридцать " + GetDayNumber(day_units);
	//совмещение десятков и единиц в одно количественное числительное
}

int main()
{
	setlocale(0, "");

	int d, m;
	cout << "Введите номер дня и месяца через пробел (учитывая верное количество дней в месяце): ";
	cin >> d >> m;

	Months month = static_cast<Months>(m);//преобразование номера месяца к типу структуры
	//для дальнейшей обработкой его функцией перевода его в порядковое числительное
	Days day = static_cast<Days>(d);
	string dayName;
	//костыль, чтобы не прописывать руками 31 название
	if (d > 0 && d < 21 || d == 30)
	{
		dayName = GetDayNumber(day);//если готовое числительное уже есть в структуре, то оно просто
//передаётся в интовскую переменную
	}
	//если числительное составное (двадцать первое, тридцать третье), то оно обрабатывается совмещающей функцией
	else
	{
		dayName = DevideDayNumber(d);
	}
	cout << dayName + " " + GetMonth(month);//вывод на экран результата

	return 0;
}