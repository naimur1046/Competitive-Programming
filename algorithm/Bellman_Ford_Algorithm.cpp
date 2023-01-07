#include<bits\stdc++.h>
using namespace std;
const int N=1e3+10;
int INF=1e9+10;
vector<int> dist(N,INF);
 vector<vector<int>> graph(N);
 void Bellman_Ford(int vetices,int edges)
 {
    for(int i=0;i<vetices-1;i++)
    {
        for(int j=0;j<edges;j++)
        {
            int u=graph[j][0];
            int v=graph[j][1];
            int wt=graph[j][2];
            dist[v]=min(dist[v],dist[u]+wt);
        }
    }
 }
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin >> u >> v >> w;
        graph.push_back({u,v,w});
    }
    int src;
    cin>> src;
    dist[src]=0;
    Bellman_Ford(n,m);
    
}
