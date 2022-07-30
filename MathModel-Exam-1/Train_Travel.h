#pragma once
#include "head.h"
#include "Time.h"

class Train_Travel {
public:
    int station_index;	//站次
    string station_name;	//站名
    Time arrive_time, leave_time;	//到达时间，离开时间
    Time stay_time;	//停留时间
    Time duration;	//运行时间
    int mileage;	//里程

    Train_Travel(int station_index, string station_name, Time arrive_time, Time leave_time, Time stay_time, Time duration, int mileage) {
        this->station_index = station_index;
        this->station_name = station_name;
        this->arrive_time = arrive_time;
        this->leave_time = leave_time;
        this->stay_time = stay_time;
        this->duration = duration;
        this->mileage = mileage;
    }
};
