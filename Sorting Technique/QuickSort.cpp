#include <bits/stdc++.h>
using namespace std;

int Pivot(vector<int> &nums, int l, int h)
{
     int pivotElement = nums[l];
     int i = l, j = h;
     while (i < j)
     {
          while (nums[i] <= pivotElement)
          {
               i++;
          }
          while (nums[j] > pivotElement)
          {
               j--;
          }
          if (i < j)
               swap(nums[i], nums[j]);
     }
     swap(nums[j], nums[l]);
     return j;
}

void QuickSort(vector<int> &nums, int l, int h)
{
     // cout << nums[l] << endl;

     if (l < h)
     {
          int j = Pivot(nums, l, h);
          // cout << j << endl;
          QuickSort(nums, l, j - 1);
          QuickSort(nums, j + 1, h);
     }
}

int main()
{
     int n;
     cin >> n;
     vector<int> nums(n);
     for (int i = 0; i < n; i++)
          cin >> nums[i];
     QuickSort(nums, 0, n - 1);
     for (auto x : nums)
          cout << x << endl;
}
