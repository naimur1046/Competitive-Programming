#include <bits\stdc++.h>
using namespace std;
const int N = 1e3 + 5;
const int INF = 1e9 + 5;
vector<pair<int, int>> graph[N];
void dijkstra(int source)
{
    vector<int> dist(N, INF);
    vector<int> visited(N, 0);
    set<pair<int, int>> st;
    st.insert({0, source});
    dist[source] = 0;
    while (st.size() > 0)
    {
        auto node = *st.begin();
        int node_pos = node.second;
        int node_dist = node.first;
        st.erase(st.begin());
        if (visited[node_pos])
            continue;
        visited[node_pos] = true;
        for (auto child : graph[node_pos])
        {
            int child_x = child.first;
            int child_v = child.second;
            if (dist[node_pos] + child_v < dist[child_x])
            {
                dist[child_x] = dist[node_pos] + child_v;
                st.insert({child_v, child_x});
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
        int x, y, wt;
        cin >> x >> y >> wt;
        graph[x].push_back({y, wt});
    }
}
