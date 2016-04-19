#include <iostream>
using namespace std;

class Time 
{
	static int Count;
	int Hour;
	int Min;
	int Sec;	
public:
	Time();
	Time(int, int, int);
	Time(Time &);
	~Time();
	static int GetCount();
	void SetTime(int, int, int);
	void SetTime(Time &);
	void InputTime();
	char* GetTimeString();
	void PrintTime();
	void Reset();
	void IncSec();
	void IncMin();
	void IncHour();
};