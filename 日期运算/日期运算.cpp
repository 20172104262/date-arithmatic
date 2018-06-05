// 日期运算.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cdate
{
public:
	int year;
	int month;
	int day;
	void import(int y,int m,int d);
	void arithmetic();
	void display();
};
void Cdate::import(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}
void Cdate::arithmetic()
{
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	if (year % 400 == 0 || year % 4 == 0 && year%100!=0)
	{
		a[2] = 29;
	}
	if (day < a[month])
	{
		day += 1;
	}
	else if (day = a[month])
	{
		if (month < 12)
		{
			month += 1;
			day = 1;
		}
		else
		{
			year += 1;
			month = 1;
			day = 1;
		}
	}
	
}
void Cdate::display()
{
	cout << year <<"年"<< month <<"月"<< day <<"日"<< endl;
}
int main()
{
	cout << "请输入日期" << endl;
	Cdate oc;
	int q, w, e;
	cin >> q >> w >> e;
	oc.import(q,w,e);
	oc.arithmetic();
	oc.display();

    return 0;
}

