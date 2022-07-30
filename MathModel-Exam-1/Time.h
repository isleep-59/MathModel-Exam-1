#pragma once
#include "head.h"

class Time {
public:
    int hour, minute;

    Time(int hour = 0, int minute = 0) {
        this->hour = hour;
        this->minute = minute;
    }

    void getTime() {
        string tmp; cin >> tmp;
        if (tmp.find(":")) {
            hour = stoi(tmp.substr(0, 2));
            minute = stoi(tmp.substr(3, 2));
        }
        else {
            hour = 0;
            minute = stoi(tmp);
        }
    }

    void setTime(int hour, int minute) {
        this->hour = hour;
        this->minute = minute;
    }

    void display() {
        cout << hour << " : " << minute << endl;
    }

    Time operator-(Time & x) {
        int ret_hour = 0, ret_minute = 0;
        ret_minute = minute - x.minute;
        ret_hour = hour - x.hour;
        if (ret_minute < 0) {
            ret_minute += 60;
            ret_hour--;
        }
        if (ret_hour < 0) {
            ret_hour += 24;
        }

        return Time(ret_hour, ret_minute);
    }

    Time operator+(Time& x) {
        int ret_hour = 0, ret_minute = 0;
        ret_minute = minute + x.minute;
        ret_hour = hour + x.hour;
        if (ret_minute >= 60) {
            ret_minute -= 60;
            ret_hour++;
        }

        return Time(ret_hour, ret_minute);
    }
};