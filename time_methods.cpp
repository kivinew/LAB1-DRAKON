#include "time.h"

int Time::Count = 0;

Time::Time() : Hour(0), Min(0), Sec(0)
{
	Count++;
}

Time::Time(int hour, int min=0, int sec=0)
{
	SetTime(hour, min, sec);
	Count++;
}

Time::Time(Time &t) : Hour(t.Hour), Min(t.Min), Sec(t.Sec)
{
	Count++;
}

Time::~Time()
{
	Count--;
}

int Time::GetCount()
{
	return Count;
}

void Time::SetTime(int hour, int min, int sec)
{
	Hour = ((hour >= 0) && (hour < 24)) ? hour : 0; 
	
	if ((min >= 0) && (min < 60)) {
		Min = min;
	} else {
		Min = 0;
		for (int i = 0; i < min; i++) IncMin();
	}
	
	if ((sec >= 0) && (sec < 60)) {
		Sec = sec;
	} else {
		Sec = 0;
		for (int i = 0; i < sec; i++) IncSec();
	}
}

void Time::SetTime(Time &t)
{
	Hour = t.Hour;
	Min = t.Min;
	Sec = t.Sec;
}

void Time::InputTime ()
{
	int hour = -1, min = -1, sec = -1;
	
	while((hour < 0) || (hour >= 24))
	{
		cout << "Введите часы в диапазоне от 0 до 23: ";
		cin >> hour;
		if ((hour < 0) || (hour >= 24))
		{
			cout << "Часы введены некорректно!" << endl;
		}		
	}
	
	while ((min < 0) || (min >= 60))
	{
		cout << "Введите минуты в диапазоне от 0 до 59: ";
		cin >> min;
		if ((min < 0) || (min >= 60))
		{
			cout << "Минуты введены некорректно!" << endl;
		}
	}
	
	while ((sec < 0) || (sec >= 60))
	{
		cout << "Введите секунды в диапазоне от 0 до 59: ";
		cin >> sec;
		if ((sec < 0) || (sec >= 60))
		{
			cout << "Секунды введены некорректно!" << endl;
		}
	}	
	
	SetTime(hour, min, sec);
}

char* Time::GetTimeString()
{
	char *timeString = new char[9];
	
	if (Hour < 10) {
		timeString[0] = '0';
		timeString[1] = '0' + Hour;
	} else {
		timeString[0] = '0' + Hour/10;
		timeString[1] = '0' + Hour%10;
	}
	timeString[2] = ':';
	if (Min < 10) {
		timeString[3] = '0';
		timeString[4] = '0' + Min;
	} else {
		timeString[3] = '0' + Min/10;
		timeString[4] = '0' + Min%10;
	}
	timeString[5] = ':';
	if (Sec < 10) {
		timeString[6] = '0';
		timeString[7] = '0' + Sec;
	} else {
		timeString[6] = '0' + Sec/10;
		timeString[7] = '0' + Sec%10;
	}
	timeString[8] = '\0';
	
	return timeString;
}

void Time::PrintTime()
{
	if (Hour < 10) {
		cout << "0" << Hour << ":";
	} else {
		cout << Hour << ":";
	}
	if (Min < 10) {
		cout << "0" << Min << ":";
	} else {
		cout << Min << ":";
	}
	if (Sec < 10) {
		cout << "0" << Sec <<endl;
	} else {
		cout << Sec << endl;
	}
}

void Time::Reset()
{
	Hour = Min = Sec = 0;
} 

void Time::IncSec()
{
	if (++Sec == 60)
	{
		Sec = 0;
		IncMin();		
	}
}

void Time::IncMin()
{
	if (++Min == 60)
	{
		Min = 0;
		IncHour();
	}
}

void Time::IncHour()
{
	if (++Hour == 24)
	{
		Hour = 0;
	}
}

