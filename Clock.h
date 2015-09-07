#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED

typedef int hour;
typedef int minute;
typedef int second;

struct Clock {
    hour HH;
    minute MM;
    second SS;
    };

bool IsValid(int HH, int MM, int SS);

Clock MakeClock(int HH, int MM, int SS);

hour GetHour(Clock c);
minute GetMinute (Clock c);
second GetSecond (Clock c);

void SetHour(Clock *c, int newHH);
void SetMinute(Clock *c, int newMM);
void SetSecond (Clock *c, int newSS);

bool IsEqual (Clock c1, Clock c2);
Clock AddClock (Clock c1, Clock c2);
void PrintClock (Clock c);

#endif // CLOCK_H_INCLUDED

