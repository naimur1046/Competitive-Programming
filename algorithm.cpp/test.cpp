#include<bits\stdc++.h>
using namespace std;
const int N=1e3+10;
vector<int> numbers;
int dp[N];
int lcs(int position)
{
    int ans=1;
    if(position<0) return 0;
    if(dp[position]>0) return dp[position];
    for(int i=position-1;i>=0;i--)
    {
        if(numbers[i]<=numbers[position])
        ans=max(ans,1+lcs(i));
    }
    return dp[position]=ans;
}
int main()
{
    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)
    {
        int a;
        cin >>a;
        numbers.push_back(a);
    }
    int ans=0;
    for(int i=n-1;i>=0;i--)
    {
        ans=max(ans,lcs(i));
    }
    cout << ans << endl;
    return 0;
}
