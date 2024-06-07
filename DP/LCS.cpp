#include <bits/stdc++.h>
using namespace std;
const int N = 1e3;
int dp[N][N];
int lcs(int i, int j, string &str1, string &str2)
{
     if (i < 0 || j < 0)
          return 0;
     if (dp[i][j] A != -1)
          return dp[i][j];
     int res = 0;
     // Remove a character from frist string
     res = lcs(i - 1, j, str1, str2);
     // Remove a character from second string
     res = max(lcs(i, j - 1, str1, str2), res);
     // Remove a character from left and right string if match a character
     res = max(lcs(i - 1, j - 1, str1, str2) + (str1[i] == str2[j]), res);
     return dp[i][j] = res;
}
int main()
{
     memset(dp, -1, sizeof(dp));
     string str1, str2;
     cin >> str1 >> str2;
     cout << lcs(str1.size() - 1, str2.size() - 1, str1, str2) << endl;
}
