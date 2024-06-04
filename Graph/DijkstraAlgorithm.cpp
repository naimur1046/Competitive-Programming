#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
const int INF = 1e9 + 10;
vector<pari<int, in>> graph[N];
int dist[N];
void dijkstra(int source)
{
     vector<bool> visited(N, 0);
     vector<int> dist(N, INF);
     set<pair<int, int>> st;
     st.insert({0, source});
     dist[source] = 0;
     while (st.size() > 0)
     {
          auto node = *st.begin();
          int vertex = node.second;
          int dist = node.first;
          st.erase(st.begin());
          if (visited[vertex])
               continue;
          visited[vertex] = 1;
          for (auto x : graph[v])
          {
               int x_vertex = x.first;
               int x_weight = x.second;
               if (dist[vertex] + x_weight < dist[x_vertex])
               {
                    dist[x_vertex] = dist[vertex] + x_weight;
                    st.insert({dist[x_vertex], x_vertex});
               }
          }
     }
}
int main()
{
     int n, m;
     cin >> n >> m;
     for (int i = 0; i < m; i++)
     {
          int v1, v2, weight;
          cin >> v1 >> v2 >> weight;
          graph[v1].push_back({v2, weight});
     }
}
