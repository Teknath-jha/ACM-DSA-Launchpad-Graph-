#include<bits/stdc++.h>
using namespace std;
void dfs(int u, vector<vector<int> > &graph, vector<int> &vis, vector<int> &arr){
	cout << "Processing elemen : " << u;
	arr.push_back(u);
	vis[u] = 1;
	for(auto v : graph[u]){
		if(vis[v] > 0){
			continue ;
		}
		cout << v << ' ' ;
		dfs(v, graph, vis, arr);
	}
	cout << endl;
	vis[u] = 2;
}
int main(){
	int n, m;
	cout << "Enter number of nodes : ";
	cin >> n;
	cout << endl;
	cout << "Enter number of edges : ";
	cin >> m;
	cout << endl;
	vector<vector<int> > graph(n);
	int u, vv;
	for(int i = 0; i < m; ++i){
		cout << "Enter edges u v : ";
		cin >> u >> vv;
		cout << endl;
		graph[u].push_back(vv);
		graph[vv].push_back(u);
	}
	vector<int> vis(n);
	vector<int> arr;
	dfs(0, graph, vis, arr);
	for(auto elem : arr){
		cout << elem << ' ';
	}
	cout << endl;
	return 0;
}
