#pragma once
#include "head.h"
#include "Time.h"

class Train_Travel_Node {
public:
    string train_name;	//����
    string station_name;	//վ��
    Time leave_time, arrive_time;	//����ʱ�䣬�뿪ʱ��
    string stay_time;	//ͣ��ʱ��
    int days;   //����
    Time duration;	//����ʱ��
    int mileage;	//���

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
        if (arrive_time.hour == 0 && arrive_time.minute == 0)cout << "ʼ��վ ";
        else arrive_time.display(); cout << ' ';
        if (leave_time.hour == 24 && leave_time.minute == 0)cout << "�յ�վ ";
        else leave_time.display(); cout << ' ';
         cout << stay_time<<' ';
        cout << days << ' ';
        duration.display(); cout << ' ';
        cout << mileage << endl;
    }
};
