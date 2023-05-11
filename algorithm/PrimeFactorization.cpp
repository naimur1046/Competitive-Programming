#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> values;
    int n=36;
    for(int i=2;i*i<=n;i++)
    {
        while(!(n%i))
        {
            values[i]++;
            n=n/i;
        }
    }
    if(n>1) values[n]++;
    return 0;
}
