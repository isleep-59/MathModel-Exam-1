#pragma once
#include "head.h"

class Time {
public:
    int hour, minute;

    Time(int hour = 0, int minute = 0) {
        this->hour = hour;
        this->minute = minute;
    }

    void setTime(int hour, int minute) {
        this->hour = hour;
        this->minute = minute;
    }

    void display() {
        cout << hour << " : " << minute << endl;
    }
};