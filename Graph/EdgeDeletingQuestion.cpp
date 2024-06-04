#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
int graph[N];
int subTree[N];
void subTree(int vertex, int parent)
{
     subTree[vertex] += vertex;
     for (auto x : graph[vertex])
     {
          if (x != parent)
          {
               dfs(x, vertex);
               subTree[vertex] += subTree[x];
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
          graph[v1].push_back(v2);
          graph[v2].push_back(v1);
     }
     dfs(1, 0);
     long long ans = 0;
     int M = 1e9 + 10;
     for (int i = 2; i <= n; i++)
     {
          int part1 = subTree[i];
          int part2 = subTree[1] - subTree[i];
          ans = max(ans, (part1 * part2) % M) * 1LL;
     }
     cout << ans << endl;
}
