#include <iostream>
#include <vector>
#include "undirectedGraph.h"
#include "directedGraph.h"

using namespace std;

int main()
{
	char input;
	int n, m;
	pair<int,int> edges;
	vector<pair<int,int>> edgesInput;

	cout << "Is the graph directed: y/n" << endl;
	cin >> input;

	cin >> n >> m;
	
	for (int i = 0; i < m; i++)
	{
		cin >> edges.first >> edges.second;
		edgesInput.push_back(edges);
	}
	
	if (input == 'y') //directed
	{
		undirectedGraph graph(n, m, edgesInput);
	}
	else //undirected
	{
		directedGraph(n, m, edgesInput);
	}

	return 0;
}