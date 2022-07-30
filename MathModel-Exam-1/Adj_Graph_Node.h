#pragma once
#include "Train_Travel_Node.h"

class Adj_Graph_Node {
public:
	string leave_station, arrive_station;
	int travel_index;
	string train_name;

	Adj_Graph_Node() {

	}

	Adj_Graph_Node(string leave_station = "", string arrive_station = "", int travel_index = 0, string train_name = "") {
		this->leave_station = leave_station;
		this->arrive_station = arrive_station;
		this->travel_index = travel_index;
		this->train_name = train_name;
	}
}