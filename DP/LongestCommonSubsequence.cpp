#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> nums(N);
int dp[N];
int func(int i)
{
     if (dp[i] != -1)
          return dp[i];
     int res = 1;
     for (int j = i - 1; j >= 0; j--)
     {
          if (nums[j] < nums[i])
               res = max(func(j) + 1, res);
     }
     return res;
}
int main()
{
     memset(dp, -1, N);
     int n;
     cin >> n;
     for (int i = 0; i < n; i++)
          cin >> nums[i];
     int res = 0;
     for (int i = n - 1; i >= 0; i--)
     {
          res = max(res, func(i));
     }
     cout << res << endl;
}
