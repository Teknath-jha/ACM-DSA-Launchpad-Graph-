#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cout << "Enter number of nodes : ";
  cin >> n;
  cout << endl;
  cout << "Enter number of edges : ";
  cin >> m;
  cout << endl;
  vector<vector<int>> graph(n);
  vector<bool> vis(n);
  int u, vv;
  for (int i = 0; i < m; ++i) {
    cout << "Enter edges u v : ";
    cin >> u >> vv;
    cout << endl;
    graph[u].push_back(vv);
    graph[vv].push_back(u);
  }
  queue<int> q;
  vector<int> v;
  q.push(0);
  while (q.size()) {
    int u = q.front();
    q.pop();
    if (vis[u]) {
      continue;
    }
    cout << "Processing Element : " << u << endl;
    vis[u] = 1;
    v.push_back(u);
    for (auto v : graph[u]) {
      if (!vis[v]) {
		
        cout << v << ' ' << "pushed into queue" << endl;
        q.push(v);
      }
    }
  }
  for (auto elem : v) {
    cout << elem << ' ';
  }
  cout << endl;
  return 0;
}
