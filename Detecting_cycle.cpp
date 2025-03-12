
	// 								Detecting a cycle in graph using BFS 

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, m; // number of nodes and number of edges
	int u, v, start_node = 0, element, count = 0;
	cin >> n >> m;
	vector<vector<int>> graph(n);
	for(int i = 0; i < m; i++) {	
		cin >> u >> v;
		graph[u].push_back(v);
		//graph[v].push_back(u);
	} 
	queue<int> q;
	vector<bool> visited(n, false);
	visited[start_node] = true;
	q.push(start_node);
	while(!q.empty()) {
		element = q.front();
		q.pop();
		for(auto x : graph[element]) {
			if(!visited[x]) {
				visited[x] = true;
				q.push(x);
			} else {	
				count++;
			}
		}
	}
	count == 0 ? cout << "0" : cout << count;
}
		
