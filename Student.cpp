#include <iostream>
# include "Student.h"

using namespace std;

Student::Student()
{

}

Student::Student(int clocktime, int worktime, int waittime)
{
    clockTime = clocktime;
    workTime = worktime;
    waitTime = waittime;
}

int Student::getClockTime()
{
    return clockTime;
}

int Student::getWorkTime()
{
    return workTime;
}

int Student::getWaitTime()
{
    return waitTime;
}