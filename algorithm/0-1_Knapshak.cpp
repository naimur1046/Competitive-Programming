#include<bits\stdc++.h>
using namespace std;
const int N=1e4+10;
int wt[1000],val[1000];
int dp[N][N];
int Knapshack(int w,int item)
{
    if(w<=0||item<0) return 0;
    if(dp[w][item]>0) return dp[w][item];
    int ans=Knapshack(w,item-1);
    if(w-wt[item]>=0)
    ans=max(ans,Knapshack(w-wt[item],item-1)+val[item]);
    return dp[w][item] = ans;

}
int main()
{
    int n,w;
    cin >> n >> w;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        cin >> wt[i] >> val[i]; 
    }
    cout << Knapshack(w,n-1) << endl;
}
