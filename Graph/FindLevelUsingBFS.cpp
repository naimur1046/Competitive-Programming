#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<bool> visited(N);
vector<int> graph[N];
vector<int> level(N);
void bfs(int node)
{
     queue<int> q;
     q.push(node);
     visited[node] = true;
     while (!q.empty())
     {
          int cur_vertex = q.front();
          cout << cur_vertex << endl;
          q.pop();
          for (auto x : graph[cur_vertex])
          {
               if (!visited[x])
               {
                    q.push(x);
                    visited[x] = true;
                    level[x] = level[cur_vertex] + 1;
               }
          }
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
     bfs(1);
}
