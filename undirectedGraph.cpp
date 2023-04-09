#include "undirectedGraph.h"

undirectedGraph::undirectedGraph(const int& i_n, const int& i_m, const vector<pair<int, int>>& i_edges):n(i_n), m(i_m)
{

	Edges::data data;
	//build array
	m_graph.resize(n);

	for (int i = 0; i < m; i++)
	{
		//enter second to first index
		data.m_edge = i_edges[i].second;
		data.m_mark = false;
	
		m_graph[i_edges[i].first].m_edges.push_back(data);

		//enter first to second index
		data.m_edge = i_edges[i].first;
		data.m_mark = false;
		data.m_edgePointer = m_graph[i_edges[i].first].m_edges.end()-- ;
		m_graph[i_edges[i].second].m_edges.push_back(data);

		//update first edge pointer
		prev(m_graph[i_edges[i].first].m_edges.end())->m_edgePointer= prev(m_graph[i_edges[i].second].m_edges.end());

	}

	//update pos for each list
	for (int i = 0; i < m; i++)
	{
		m_graph[i].pos = m_graph[i].m_edges.begin();
	}
	
}