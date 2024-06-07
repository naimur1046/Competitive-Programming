#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
     for (int i = 10; i >= 0; i--)
     {
          cout << ((num >> i) & 1);
     }
     cout << endl;
}
void NthBitSetOrNotSet(int nums, int n)
{
     if ((1 << n) & nums)
     {
          cout << "Set " << endl;
     }
     else
     {
          cout << "Unset" << endl;
     }
}
int main()
{
     printBinary(15);
     NthBitSetOrNotSet(15, 3);
}
