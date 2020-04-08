#include "Date.h"
#include <iostream>

using namespace std;

void Date::set(int d, int m, int y)
{
    setDay(d);
    setMonth(m);
    setYear(y);
}

void Date::setDay(int d)
{
    if (d <= 31 && d > 0)
        day = d;
    else
        throw "Error: incorrect value of day!";
}

void Date::setMonth(int m)
{
    if (m > 0 && m <= 12)
        month = m;
    else
    {
        throw "Error: incorrect value of month!";
    }
}

void Date::setYear(int y)
{
    if (y > 0)
        year = y;
    else
        throw "Error: incorrect value of year!";
}

Date::Date()
{
    day = month = year = 1;
}

Date::Date(int d, int m, int y)
{
    setDay(d);
    setMonth(m);
    setYear(y);
}

Date::~Date() {}

ostream& operator<<(ostream& out, Date& date)
{
    out << date.day << "." << date.month << "." << date.year;
    return out;
}

bool operator<=(const Date& d1, const Date& d2)
{
    return d1.day + d1.month * 31 + d1.year * 365 <= d2.day + d2.month * 31 + d2.year * 365;
}

int operator-(const Date& d1, const Date& d2)
{
    return (d1.day + d1.month * 31 + d1.year * 365) - (d2.day + d2.month * 31 + d2.year * 365);
}
