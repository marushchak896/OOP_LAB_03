#pragma once
#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date();
    Date(int d, int m, int y);
    void set(int d, int m, int y);
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    ~Date();
    friend ostream& operator<<(ostream& out, Date& date);
    friend bool operator<=(const Date& d1, const Date& d2);
    friend int operator-(const Date& d1, const Date& d2);
};
