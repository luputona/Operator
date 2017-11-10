#include<iostream>
#include<string.h>

using namespace std;

class Person
{
public:
	Person()
	{
		name == NULL;
	}
	Person(char *str)
	{
		int len = strlen(str);
		name = new char[len + 1];
		strcpy_s(name,len+1, str);
	}

	~Person()
	{
		delete[] name;
	}

	Person & operator=(const Person &psn);

	char *GetName()
	{
		return name;
	}
private:
	char *name;
};

Person & Person::operator=(const Person &psn)
{
	if (this == &psn)
	{
		return *this;
	}

	delete[] name;

	int len = strlen(psn.name);
	name = new char[len + 1];
	strcpy_s(name,len+1, psn.name);

	return *this;
}

void main()
{
	Person psn1("Mapsosa");
	Person psn2("Call Of Duty");

	psn1 = psn2;

	cout << psn1.GetName() << endl;
	
}