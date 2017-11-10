#include<iostream>
using namespace std;

class SimpleTime
{
public:
	int hr;
	int min;
public:
	SimpleTime() {};
	SimpleTime(int h, int m)
	{
		hr = h;
		min = m;
	}
	SimpleTime operator+(const SimpleTime &st2);
	
};

SimpleTime SimpleTime::operator+(const SimpleTime &st2)
{
	int hr_buf;
	int min_buf;
	int total;

	total = (hr * 60 + min) + (st2.hr * 60 + st2.min);
	hr_buf =  total / 60;
	min_buf = total % 60;

	return SimpleTime(hr_buf, min_buf);
}

void main1()
{
	SimpleTime st1(5, 30);
	SimpleTime st2(3, 55);
	SimpleTime st3;

	st3 = st1 + st2;

	cout << st3.hr << "½Ã" <<st3.min <<"ºÐ" << endl;

}