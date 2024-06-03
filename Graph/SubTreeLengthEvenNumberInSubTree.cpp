#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int subTree[N];
int evenNumber[N];
vector<int> graph[N];
void dfs(int vertex, int parent)
{
     if (vertex % 2)
          evenNumber[vertex]++;
     for (auto x : graph[vertex])
     {
          if (vertex != parent)
          {
               dfs(x, vertex);
               subTree[vertex] += subTree[x];
               evenNumber[vertex] += evenNumber[x];
          }
     }
     subTree[vertex] += graph[N];
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
     int q;
     cin >> q;
     dfs(1, 0);
     for (int i = 0; i < q; i++)
     {
          int node;
          cin >> node;
          cout << subTree[node] << evenNumber[node] << endl;
     }
}
