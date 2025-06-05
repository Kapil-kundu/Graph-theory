#include<bits/stdc++.h>
using namespace std;

void dfs(int n, vector<int> adj[], vector<int> &list) {
	vector<bool> vis(n, false);
	stack<int> st;
	st.push(0);
	vis[0] = true;
	while(!st.empty()) {
		int element = st.top();
		st.pop();
		list.push_back(element);
		for(auto it : adj[element]) {
			if(!vis[it]) {
				vis[it] = true;
				st.push(it);
			}
		}
	}	
}
void print(vector<int> list) {
	cout << " I am in " << endl;
	for(int i = 0; i < list.size(); i++) {
		cout << list[i] << " ";
	}	
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	int u, v;
	for(int i = 0; i < m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> list;
	dfs(n, adj, list);
	print(list);

	return 0;
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
