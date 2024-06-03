#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int depth[N];
int height[N];
vector<int> graph[N];
void dfs(int vertex, int parent)
{
     for (auto x : graph[vertex])
     {
          if (x != parent)

          {
               depth[x] = depth[vertex] + 1;
               dfs(x, vertex);
               height[vertex] = max(height[vertex], height[x] + 1);
          }
     }
}
int main()
{
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          int v1, v2;
          cin >> v1 >> v2;
          graph[v1].push_back(v2);
          graph[v2].push_back(v1);
     }
     dfs(1, 0);
     for (int i = 1; i <= n; i++)
          cout << depth[i] << endl;
}
