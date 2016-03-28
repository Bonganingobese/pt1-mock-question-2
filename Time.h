#pragma once
#include <iostream>
using namespace std;
class Time
{
	friend ostream &operator<<(ostream &, const Time &);
public:
	Time(int=12,int=0);
	~Time();
	void set(int, int);
	void get(static int, static int) const;
 Time operator++(int);                   //postfix increament overloading function
	void increamentMinutes();
private:
  int Hours;
  int Minutes;
};

