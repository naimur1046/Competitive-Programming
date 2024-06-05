#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int dp[N];
vector<int> coins(N);
int coinChange(int amount)
{
     if (amount == 0)
          return 0;
     if (dp[amount] != -1)
          return coins[amount];
     int numberofCoins = INT_MAX;
     for (auto x : coins)
     {
          if (amount - x >= 0)
               numberofCoins = min(numberofCoins + 0LL, coinChange(amount - x) + 1LL);
     }
     return dp[amount] = numberofCoins;
}
int main()
{
     memset(coins, -1, N);
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
          cin >> coins[i];
     int amount;
     cin >> amount;
     int ans = coinChange(amount);
     cout << ans == INT_MAX ? -1 : ans << endl;
}
