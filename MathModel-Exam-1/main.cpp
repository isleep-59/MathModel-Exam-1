#include "head.h"
#include "Time.h"
#include "Train_Travel_Node.h"
#include "Adj_Graph_Node.h"
#include <unordered_map>

//����Ϊ����
unordered_map<string, vector<Train_Travel_Node>> Train_Travel_Table;
//����վΪ����
unordered_map<string, vector<Adj_Graph_Node> > Adj_Graph;
//dfs�ݴ�����
vector<Train_Travel_Node> DFS_Travel;
//����һ�����
vector<vector<Train_Travel_Node> > Ans_Travel_Table;

bool dfs(string now_station, string target_station, string train_name,int tt=0) {
	if (now_station == target_station) {
		DFS_Travel.push_back(Train_Travel_Table[train_name][tt]);
		return true;
	}

	for (auto it : Adj_Graph[now_station]) {
		if (it.train_name == train_name) {
			DFS_Travel.push_back(Train_Travel_Table[it.train_name][it.travel_index - 1]);
			if (dfs(it.arrive_station, target_station, train_name,it.travel_index)) {
				return true;
			}
			DFS_Travel.pop_back();
		}
	}
	return false;
}

void solve() {
	string start_station, target_station;
	cout << "������㣺";
	cin >> start_station;
	cout << "�����յ㣺";
	cin >> target_station;

	for (auto it : Adj_Graph[start_station]) {


		if (dfs(start_station, target_station, it.train_name)) {
			Ans_Travel_Table.push_back(DFS_Travel);
		}
		DFS_Travel.clear();
	}
	int num = 0;
	freopen("out.txt", "w", stdout);
	for (auto i : Ans_Travel_Table) {
		cout<<++num<<endl;
		int index = 1;
		for (auto j : i) {
			cout << index++ << ' ';
			j.display();
		}
		cout << endl;
	}
}

void init_train_travel_table() {
	string train_name;	//����
	string station_name;	//վ��
	Time leave_time, arrive_time;	//����ʱ�䣬�뿪ʱ��
	string stay_time;	//ͣ��ʱ��
	int days;   //����
	Time duration;	//����ʱ��
	int mileage;	//���
	while (cin >> train_name) {

		cin >> station_name;
		arrive_time.getTime();
		leave_time.getTime();
		cin >> stay_time;
		cin >> days;
		duration.getTime();
		cin >> mileage;

		Train_Travel_Node TTN_term(train_name, station_name, leave_time, arrive_time, stay_time, days, duration, mileage);
		Train_Travel_Table[train_name].push_back(TTN_term);
	}
}

void init_Adj_Graph() {
	for (auto it : Train_Travel_Table) {
		for (int i = 0; i < it.second.size() - 1; ++i) {
			string leave_station = it.second[i].station_name;
			string arrive_station = it.second[i + 1].station_name;
			int travel_index = i + 1;
			string train_name = it.second[i].train_name;

			Adj_Graph_Node AGN_term(leave_station, arrive_station, travel_index, train_name);
			Adj_Graph[leave_station].push_back(AGN_term);
		}
	}
}

signed main() {

	freopen("in.txt", "r", stdin);

	init_train_travel_table();
	init_Adj_Graph();
	cin.clear();
	freopen("CON", "r", stdin);

	solve();

	return 0;
}