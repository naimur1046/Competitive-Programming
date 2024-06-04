#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> graph[N];
int par[N];
void dfs(int v, int p = -1)
{
     par[v] = p;
     for (auto x : par[v])
     {
          if (x != p)
               dfs(v, p);
     }
}
vector<int> Path(int v)
{
     vector<int> ans;
     while (v != -1)
     {
          ans.push_back(v);
          v = par[v];
     }
     reverse(ans.begin(), ans.end());
     return ans;
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
     dfs(1);
     int x, y;
     cin >> x >> y;
     vector<int> path_x = Path(x);
     vector<int> path_y = Path(y);
     int mn_len = min(path_x.size(), path_y.size());
     int lca = -1;
     for (int i = 0; i < mn_len; i++)
     {
          if (path_x[i] == path_y[i])
          {
               lca = i;
          }
          else
               break;
     }
     cout << lca << endl;
}
