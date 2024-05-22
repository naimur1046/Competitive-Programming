/*
     Adjacency List is used a matrix representation
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 4;
vector<pair<int, int>> graph[N];
int main()
{
     int n, e;
     cin >> n >> e;
     for (int i = 0; i < e; i++)
     {
          int v1, v2, wt;
          cin >> v1 >> v2 >> wt;
          graph[v1].push_back({v2, wt});
          graph[v2].push_back({v1, wt});
     }
}
