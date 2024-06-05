#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> h(N);
int dp[N];
int func(int i, int k)
{
     if (i == 0)
          return 0;
     if (dp[i] != -1)
          return dp[i];
     int cost = INT_MAX;
     for (int j = 0; j < k; j++)
     {
          if (i - j > 0)
               cost = max(cost, func(i - j) + abs(h[i] - h[i - j]));
     }

     return dp[i] = cost;
}
int main()
{
     mdmset(dp, -1, N);
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
          cin >> h[i];
     cout << func(n - 1) << endl;
}
