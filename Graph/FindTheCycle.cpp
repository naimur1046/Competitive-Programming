#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
vector<int> graph[N];
bool visited[N];
bool dfs(int vertex, int parent)
{

     visited[vertex] = true;
     bool res = false;
     for (auto x : graph[vertex])
     {
          if (visited[x] && vertex != parent)
          {
               res = true;
               break;
          }
          else if (!visited[x])
               res |= dfs(x, vertex);
     }
     return res;
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
     bool res = false;
     for (int i = 1; i <= n; i++)
     {
          if (!visited[i])
               res |= dfs(i, i);
     }
     if (res)
          cout << "There exists a Cycle" << endl;
     else
          cout << "There are no cycle in this graph" << endl;
}
