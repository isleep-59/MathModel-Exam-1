#pragma once
#include "head.h"
#include "Time.h"
#include "Train_Travel_Node.h"

class Ans_Travel_Node {
public:
	Time start_time, end_time;
	vector<Train_Travel_Node> info;

	Ans_Travel_Node() {

	}

	Ans_Travel_Node(Time start_time, Time end_time, vector<Train_Travel_Node> info) {
		this->start_time = start_time;
		this->end_time = end_time;
		this->info = info;
	}
};