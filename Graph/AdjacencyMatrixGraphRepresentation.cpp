/*
    Adjacency Matrix used to represent a graph
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n, m;
     cin >> n >> m;
     int graph[n + 1][n + 1];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < n; j++)
          {
               graph[i][j] = 0;
          }
     }
     for (int i = 0; i < m; i++)
     {
          int v1, v2;
          cin >> v1 >> v2;
          graph[v1][v2] = 1;
     }
}
