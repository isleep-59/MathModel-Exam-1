#pragma once
#include "head.h"
#include "Time.h"

class Train_Travel_Node {
public:
    string train_name;	//车名
    string station_name;	//站名
    Time leave_time, arrive_time;	//到达时间，离开时间
    string stay_time;	//停留时间
    int days;   //天数
    Time duration;	//运行时间
    int mileage;	//里程

    Train_Travel_Node(string train_name = "", string station_name = "", Time leave_time = NULL, Time arrive_time = NULL, string stay_time = NULL, int days = 0, Time duration = NULL, int mileage = 0) {
        this->train_name = train_name;
        this->station_name = station_name;
        this->arrive_time = arrive_time;
        this->leave_time = leave_time;
        this->stay_time = stay_time;
        this->days = days;
        this->duration = duration;
        this->mileage = mileage;
    }

    void display() {
        cout << train_name << ' ';
        cout << station_name << ' ';
        if (arrive_time.hour == 0 && arrive_time.minute == 0)cout << "始发站 ";
        else arrive_time.display(); cout << ' ';
        if (leave_time.hour == 24 && leave_time.minute == 0)cout << "终点站 ";
        else leave_time.display(); cout << ' ';
         cout << stay_time<<' ';
        cout << days << ' ';
        duration.display(); cout << ' ';
        cout << mileage << endl;
    }
};
