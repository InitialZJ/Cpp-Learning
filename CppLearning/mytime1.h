#pragma once
#ifndef MYTIME1_H_
#define MYTIME1_H_

class Time
{
public:
	Time();
	Time(int h, int m = 0);
	~Time();
	void AddMin(int m);
	void AddHr(int h);
	void Reset(int h = 0, int m = 0);
	Time operator+(const Time& t) const;
	void Show() const;

private:
	int hours;
	int minutes;
};
#endif // !MYTIME1_H_
