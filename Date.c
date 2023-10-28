#include <time.h>
#include <stdio.h>
int main()
{
    time_t t = time(NULL);
    struct tm *current_time;
    current_time = localtime(&t);
    int year = current_time->tm_year + 1900;
    int mon = current_time->tm_mon + 1;
    int day = current_time->tm_wday + 22;
    int hour = current_time->tm_hour;
    int min = current_time->tm_min;
    int sec = current_time->tm_sec;
    printf("the year is %d and the mounth is %d and the day is %d and the hour is %d and min %d and sec %d", year, mon, day, hour, min, sec);
    
    return 0;
}
