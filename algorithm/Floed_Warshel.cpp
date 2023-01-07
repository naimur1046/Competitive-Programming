#include<bits\stdc++.h>
using namespace std;
const int N=1e3+10;
const int INF=1e9+10;
int dist[N][N];
void flued_worsel(int vertices)
{
    for(int k=0;k<vertices;k++)
    {
        for(int i=0;i<vertices;i++)
        {
            for(int j=0;j<vertices;j++)
            {
                if(dist[i][k]!=INF&&dist[k][j]!=INF)
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
}
int main()
{
    
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(i==j) dist[i][j]=0;
            dist[i][j]=INF;
        }

    }
    int vetices,edges;
    cin >> vetices >> edges;
    for(int i=0;i<edges;i++)
    {
        int x,y,wt;
        cin >> x >> y >> wt;
        dist[x][y]=wt;
    }
    return 0;
}
