#pragma once
#include "head.h"
#include "Time.h"

class Train_Travel {
public:
    int station_index;	//վ��
    string station_name;	//վ��
    Time arrive_time, leave_time;	//����ʱ�䣬�뿪ʱ��
    Time stay_time;	//ͣ��ʱ��
    Time duration;	//����ʱ��
    int mileage;	//���

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
