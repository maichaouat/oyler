
#include "directedGraph.h"

directedGraph::directedGraph(const int& i_n, const int& i_m, const vector<pair<int, int>>& i_edges) :n(i_n), m(i_m)
{
	//build array
	m_graph.resize(n);

	for (int i = 0; i < m; i++)
	{

		m_graph[i_edges[i].first].m_edges.push_back(i_edges[i].second);
	}

	//update pos for each list
	for (int i = 0; i < m; i++)
	{
		m_graph[i].pos = m_graph[i].m_edges.begin();
	}
}