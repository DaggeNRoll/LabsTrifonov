#include <iostream>

using namespace std;
//структура с мес€цами
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
//структура с возможными цифрами в номере дн€
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
//функци€ переводит часть номера дн€ в пор€дковое числительное
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
		return "четвЄртое";
		break;
	case FIVE:
		return "п€тое";
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
		return "дев€тое";
		break;
	case TEN:
		return "дес€тое";
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
		return "п€тнадцатое";
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
		return "дев€тнадцатое";
		break;
	case TWENTY:
		return "двадцатое";
		break;
	case THIRTY:
		return "тридцатое";
		break;
	}
}
//функци€ переводит номер мес€ца в "письменную" форму
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
//необходимость этой функции смотри в 179-й и 185-й строках
string DevideDayNumber(int d)
{
	int tens = d / 10;//получаетс€ первое слово числительного
	int units = d % 10;//получаетс€ второе слово числительного
	Days day_units = static_cast<Days>(units);//количество единиц преобразуетс€ в тип структуры дл€
	//дальнейшего его обработки функцикй преобразовани€ номера дн€
	return (tens == 2) ? "двадцать " + GetDayNumber(day_units) : "тридцать " + GetDayNumber(day_units);
	//совмещение дес€тков и единиц в одно количественное числительное
}

int main()
{
	setlocale(0, "");

	int d, m;
	cout << "¬ведите номер дн€ и мес€ца через пробел (учитыва€ верное количество дней в мес€це): ";
	cin >> d >> m;

	Months month = static_cast<Months>(m);//преобразование номера мес€ца к типу структуры
	//дл€ дальнейшей обработкой его функцией перевода его в пор€дковое числительное
	Days day = static_cast<Days>(d);
	string dayName;
	//костыль, чтобы не прописывать руками 31 название
	if (d > 0 && d < 21 || d == 30)
	{
		dayName = GetDayNumber(day);//если готовое числительное уже есть в структуре, то оно просто
//передаЄтс€ в интовскую переменную
	}
	//если числительное составное (двадцать первое, тридцать третье), то оно обрабатываетс€ совмещающей функцией
	else
	{
		dayName = DevideDayNumber(d);
	}
	cout << dayName + " " + GetMonth(month);//вывод на экран результата

	return 0;
}