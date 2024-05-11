#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     vector<int> nums(n);
     for (int i = 0; i < n; i++)
     {
          cin >> nums[i];
     }
     for (int i = 0; i < n; i++)
     {
          int j = i, k = i;
          while (j < n)
          {
               if (nums[j] < nums[k])
               {
                    k = j;
               }
               j++;
          }
          swap(nums[i], nums[k]);
     }
     for (auto x : nums)
          cout << x << endl;
}
