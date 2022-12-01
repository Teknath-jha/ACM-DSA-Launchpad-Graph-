// Adjacency matrix representation

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cout << "Enter number of vertices and edge : ";
  cin >> n >> m;

  int mat[n][n];

  // Initialize entire matrix to 0
  // i.e NO connections at all initially
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mat[i][j] = 0;
    }
  }

  int u, v;
  for (int i = 0; i < m; i++) {
    cout << "Enter edge values u and v : ";
    cin >> u >> v;
    mat[u][v] = 1; // make an edge from u -> v
    mat[v][u] = 1; // make an edge from v -> u
  }

  // Display
  cout << endl << "How this graph looks like : " << endl;
  cout << "    ";
  for (int i = 0; i < n; i++) {
    cout << i << " ";
  }
  cout << endl;
  for (int i = 0; i < n; i++) {
    cout << i << " : ";
    for (int j = 0; j < m; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;
  return 0;
}