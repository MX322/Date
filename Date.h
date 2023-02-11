#pragma once
#include <iostream>
class Date
{
private:
	int day;
	int month;
	int year;

public:
	Date();
	Date(int _day, int _month, int _year);

	void SetDay(int _day);
	void SetMonth(int _month);
	void SetYear(int _year);

	Date& operator++();
	Date& operator--();
	Date& operator+=(int num);
	Date& operator-=(int num);
	Date& operator=(Date& obj);
	bool operator==(Date& obj);
	bool operator!=(Date& obj);
	bool operator>(Date& obj);
	bool operator<(Date& obj);

	friend std::ostream& operator<<(std::ostream& ConsoleOut, Date& obj);

	void Plus();
};

std::ostream& operator<<(std::ostream& ConsoleOut, Date& obj);
std::istream& operator>>(std::istream& ConsoleIn, Date& obj);