#include <bits/stdc++.h>
using namespace std;

// visited array
// global array default set to 0 in c++
int vis[100];

void bfs(vector<int> adj[], int src) {

  queue<int> q;
  q.push(src);
  while (!q.empty()) {

    int node = q.front();
    q.pop();

    for (auto child : adj[node]) {
      if (vis[child] == 0) {
        vis[child] = 1;
        q.push(child);
      }
    }
  }
}

int main() {

  int n, m;
  cout << "Enter number of vertices and edge : ";
  cin >> n >> m;

  vector<int> adj[n];

  int u, v;
  for (int i = 0; i < m; i++) {
    cout << "Enter edge values u and v : ";
    cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  // Display
  cout << endl << " How this graph looks like : " << endl;
  for (int node = 0; node < n; node++) {
    cout << node << " : ";
    for (auto child : adj[node]) {
      cout << child << " -> ";
    }
    cout << endl;
  }

  int components = 0;

  for (int i = 0; i < n; i++) {

    if (vis[i] == 0) {
      bfs(adj, i);
      components++;
    }
  }

  cout << endl << "Total number of components : " << components << endl << endl;

  return 0;
}