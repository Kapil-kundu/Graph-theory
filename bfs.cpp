#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int n, vector<int> adj[]) {
	vector<bool> visited(n, false);
	queue<int> q;
	visited[0] = true;
	q.push(0);
	vector<int> list;
	while(!q.empty()) {
		int element = q.front();
		q.pop();
		list.push_back(element);
		for(auto it : adj[element]) { 
			if(!visited[it]) {
				visited[it] = true;
				q.push(it);
			}
		}
	}
	return list;
}
				

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n ];
	int u, v;
	for(int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> list = bfs(n, adj);
	for(int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}
}
/*
5 6
0 1
0 2
1 3
1 2
2 4
3 4
*/
