#include <bits/stdc++.h>
using namespace std;

// visited array
// global array default set to 0 in c++
int vis[100];

void dfs(vector<int> adj[], int node) {
  vis[node] = 1;
  for (auto child : adj[node]) {

    // if child is not already visited

    if (vis[child] == 0) {
      // make a call to child node
      dfs(adj, child);
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
  cout << endl << "How this graph looks like : " << endl;
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
      dfs(adj, i);
      components++;
    }
  }

  cout << endl << "Total number of components : " << components << endl << endl;

  return 0;
}