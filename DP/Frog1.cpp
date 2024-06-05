#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> h(N);
int dp[N];
int func(int i)
{
     if (i == 0)
          return 0;
     if (dp[i] != -1)
          return dp[i];
     int cost = INT_MAX;
     cost = min(func(i - 1) + abs(h[i - 1] - h[i]), cost);
     if (i > 1)
          cost = min(func(i - 2) + abs(h[i - 2] - h[i]), cost);
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
