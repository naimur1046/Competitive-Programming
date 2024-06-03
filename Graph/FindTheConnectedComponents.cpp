#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
vector<int> graph[N];
bool visited[N];
void dfs(int vertex)
{
     if (visited[vertex])
          return;
     visited[vertex] = true;
     for (auto x : graph[vertex])
     {
          if (!visited[x])
               dfs(x);
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
     int res = 0;
     for (int i = 1; i <= n; i++)
     {
          if (visited[i])
               continue;
          else
          {
               dfs(i);
               res++;
          }
     }
     cout << res << endl;
     return 0;
}
