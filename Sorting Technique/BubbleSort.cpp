
#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin >> n;
     vector<int> numbers(n);
     for (int i = 0; i < n; i++)
     {
          cin >> numbers[i];
     }
     int count = 1;
     while (count < n)
     {
          for (int i = 0; i < n - count; i++)
          {
               if (numbers[i] > numbers[i + 1])
               {
                    swap(numbers[i], numbers[i + 1]);
               }
          }
          count++;
     }
     return 0;
}
