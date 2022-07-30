#pragma once
#include "Train_Travel.h"

class Adj_Graph_Node {
public:
	Train_Travel info;

	Adj_Graph_Node() {

	}

	Adj_Graph_Node(Train_Travel info) {
		this->info = info;
	}
};