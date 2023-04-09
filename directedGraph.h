#include <iostream>
#include <vector>
#include <list>

using namespace std;
#pragma once


class directedGraph
{
	class Edges
	{
		
		list<int> m_edges;
		list<int>::iterator pos;

		friend directedGraph;

	};

	int n;
	int m;
	vector<Edges> m_graph;

public:
	directedGraph(const int& i_n, const int& i_m, const vector<pair<int, int>>& i_edges);
	void buildGraph();
	bool isConnected() const;
	bool isEulerian() const;
	void findEuler() const;

};
