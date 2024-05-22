/*
   Defth Frist Search

*/

#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 4;

vector<int> graph[N];
vector<bool> visited(N);

void dfs(int vertex)
{
     visited[vertex] = true;
     for (int child : graph[vertex])
     {
          if (!visited[child])
               dfs(child);
     }
}

int main()
{
     int n, e;
     cin >> n >> e;
     for (int i = 0; i < e; i++)
     {
          int v1, v2;
          cin >> v1 >> v2;
          graph[v1].push_back(v2);
          graph[v2].push_back(v1);
     }
     dfs(1);
}
