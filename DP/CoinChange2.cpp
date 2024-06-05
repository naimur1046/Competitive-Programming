#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[310][N];
vector<int> coins(N);
int coinChange(int index, int amount)
{
     if (!amount)
          return 1;
     if (index < 0)
          return 0;
     if (dp[index][amount] != -1)
          return dp[index][amount];
     int ways = 0;
     for (int coin_amount = 0; coin_amount <= amount; coin_amount += coins[index])
     {

          ways += coinChange(index - 1, amount - coin_amount);
     }
     return dp[index][amount] = ways;
}
int main()
{
     memset(dp, -1, sizeof(dp));
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
          cin >> coins[i];
     int amount;
     cin >> amount;
     int ans = coinChange(amount);
     cout << ans << endl;
}
