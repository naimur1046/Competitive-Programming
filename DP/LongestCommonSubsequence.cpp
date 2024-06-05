#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> nums(N);
int func(int i)
{
     int res = 1;
     for (int j = i - 1; j >= 0; j--)
     {
          if (nums[j] < nums[i])
               res = max(func(j) + 1, res);
     }
}
int main()
{
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
