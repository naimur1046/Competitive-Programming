#include <bits\stdc++.h>
using namespace std;
vector<int> prifix_function(string str)
{
    int n = str.size();
    vector<int> pi(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = pi[i - 1];
        while (j > 0 and str[i] != str[j])
        {
            j = pi[j - 1];
        }
        if (str[i] == str[j])
            j++;
        pi[i] = j;
    }
    return pi;
}
int main()
{
    int t;
    string str1, str2;
    cin >> str1 >> str2;
    auto prefix = prifix_function(str1);
    int pos = -1;
    int i(0), j(0);
    while (i < str2.size())
    {
        if (str1[j] == str2[i])
        {
            j++;
            i++;
        }
        else
        {
            if (j != 0)
                j = prefix[j - 1];

            else
                i++;
        }
        if (j == str1.size())
        {
            pos = i - str1.size();
            break;
        }
    }
    cout << pos << endl;
    return 0;
}
