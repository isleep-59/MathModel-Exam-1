#pragma once
#include "head.h"
#include "Time.h"

class Train_Travel_Node {
public:
    string train_name;	//车名
    string station_name;	//站名
    Time leave_time, arrive_time;	//到达时间，离开时间
    Time stay_time;	//停留时间
    int days;   //天数
    Time duration;	//运行时间
    int mileage;	//里程

    Train_Travel_Node(string train_name = "", string station_name = "", Time leave_time = NULL, Time arrive_time = NULL, Time stay_time = NULL, int days = 0, Time duration = NULL, int mileage = 0) {
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
        arrive_time.display(); cout << ' ';
        leave_time.display(); cout << ' ';
        stay_time.display(); cout << ' ';
        cout << days << ' ';
        duration.display(); cout << ' ';
        cout << mileage << endl;
    }
};
