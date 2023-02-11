#include "Date.h"

Date::Date() = default;

Date::Date(int _day, int _month, int _year)
{
	this->day = _day;
	this->month = _month;
	this->year = _year;
}

void Date::SetDay(int _day)
{
	this->day = _day;
}

void Date::SetMonth(int _month)
{
	this->month = _month;
}

void Date::SetYear(int _year)
{
	this->year = _year;
}

Date& Date::operator++()
{
	this->day++;
	return *this;
}

Date& Date::operator--()
{
	this->day--;
	return *this;
}

Date& Date::operator+=(int num)
{
	this->day += num;
	return *this;
}

Date& Date::operator-=(int num)
{
	this->day -= num;
	return *this;
}

Date& Date::operator=(Date& obj)
{
	this->day = obj.day;
	this->month = obj.month;
	this->year = obj.year;
	return *this;
}

bool Date::operator==(Date& obj)
{
	if (this->day == obj.day && this->month == obj.month, this->year == obj.year)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Date::operator!=(Date& obj)
{
	if (this->day != obj.day && this->month != obj.month, this->year != obj.year)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Date::operator>(Date& obj)
{
	if (this->year > obj.year)
	{
		return true;
	}

	else
	{
		return false;
	}
}

bool Date::operator<(Date& obj)
{
	if (this->year < obj.year)
	{
		return true;
	}

	else
	{
		return false;
	}
}

std::ostream& operator<<(std::ostream& ConsoleOut, Date& obj)
{
	ConsoleOut << "Day:" << obj.day << std::endl;
	ConsoleOut << "Month:" << obj.month << std::endl;
	ConsoleOut << "Year:" << obj.year << std::endl;
	return ConsoleOut;
}

std::istream& operator>>(std::istream& ConsoleIn, Date& obj)
{
	int _day;
	int _month;
	int _year;

	ConsoleIn >> _day;
	ConsoleIn >> _month;
	ConsoleIn >> _year;

	obj.SetDay(_day);
	obj.SetMonth(_month);
	obj.SetYear(_year);

	return ConsoleIn;
}

void Date::Plus()
{
	++(*this);
}

int main()
{
	Date birthday(14, 12, 2006);
	Date tmp;
	Date today(11, 02, 2023);

	std::cin >> tmp;

	birthday.Plus();
	++birthday;
	--birthday;
	birthday+=10;
	birthday-=10;

	std::cout << tmp;
	std::cout << birthday;

	tmp = birthday;

	if (tmp == birthday)
	{
		std::cout << "==" << std::endl;
	}

	if (tmp != today)
	{
		std::cout << "!=" << std::endl;
	}

	if (tmp < today)
	{
		std::cout << "<" << std::endl;
	}

	if (today > birthday)
	{
		std::cout << ">" << std::endl;
	}

}