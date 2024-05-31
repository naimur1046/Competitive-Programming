#include <bits/stdc++.h>
using namespace std;
vector<int> CountSort(vector<int> &nums)
{
     int n = nums.size();
     int M = 0;
     for (int i = 0; i < n; i++)
          M = max(M, nums[i]);
     vector<int> countArray(M + 1, 0);
     for (int i = 0; i < n; i++)
          countArray[nums[i]]++;
     for (int i = 1; i <= M; i++)
          countArray[i] += countArray[i - 1];
     vector<int> outputArray(n);
     for (int i = n - 1; i >= 0; i--)
     {

          outputArray[countArray[nums[i]] - 1] = nums[i];
          countArray[nums[i]]--;
     }
     return outputArray;
}
int main()
{
     int n;
     cin >> n;
     vector<int> nums(n);
     for (int i = 0; i < n; i++)
     {
          cin >> nums[i];
     }
     nums = CountSort(nums);
     for (int x : nums)
          cout << x << endl;
}
