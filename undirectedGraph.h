#include <iostream>
#include <vector>
#include <list>

using namespace std;
#pragma once


class undirectedGraph
{
	class Edges
	{
		struct data
		{
			bool m_mark;
			int m_edge;
			list<data>::iterator m_edgePointer;
		};

		list<data> m_edges;
		list<data>::iterator pos;

		friend undirectedGraph;

	};

	int n;
	int m;
	vector<Edges> m_graph;
public:
	undirectedGraph(const int& i_n, const int& i_m, const vector<pair<int, int>>& i_edges);

	bool isConnected() const;
	bool isEulerian() const;
	void findEuler() const;

	
};
