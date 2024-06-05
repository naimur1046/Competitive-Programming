#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int prices[N];
int dp[N];
int rodCutting(int length)
{
     if (length == 0)
          return 0;
     if (dp[length] != -1)
          return dp[length];
     int ans = 0 for (int length_to_cut = 1; length_to_cut <= prices.size(); length_to_cut++)
     {
          if (length - length_to_cut >= 0)
               ans = max(ans, rodCutting(length - length_to_cut) + prices[length_to_cut - 1]);
     }
     return dp[length] = ans;
}
int main()
{
     memset(dp, -1, N);
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
          cin >> prices[i];
     rodCutting(n);
}
