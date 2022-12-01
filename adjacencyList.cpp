// Adjacency list representation

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cout << "Enter number of vertices and edge : ";
  cin >> n >> m;

//this is array of vectors 
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

  return 0;
}