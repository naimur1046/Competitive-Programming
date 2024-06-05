#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int weight[N], value[N];
int dp[100][100005];
int function1(int index, int weight_left)
{
     if (index < 0)
          return 0;
     if (weight_left <= 0)
          return 0;
     if (dp[index][weight_left] != -1)
          return dp[index][weight_left];
     int profit = function1(index - 1, weight_left);
     if (weight_left - weight[index] >= 0)
          profit = max(profit, function1(index - 1, weight_left - weight[index]) + value[index]);
     return dp[index][weight_left] = profit;
}
int main()
{
     memset(dp, -1, sizeof(dp));
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
     {
          cin >> weight[i] >> value[i];
     }
}
