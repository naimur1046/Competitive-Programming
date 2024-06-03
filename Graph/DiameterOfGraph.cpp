#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int dfs(int vertex, int parent)
{
     int res = 0;
     for (auto x : graph[vertex])
     {
          if (x != parent)
          {
               res = max(res, dfs(x, vertex) + 1);
          }
     }
     return res;
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
     cout << dfs(1, 0) << endl;
}
