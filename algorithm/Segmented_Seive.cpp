#include <bits\stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> primes;
vector<int> ans;
void seive(int value)
{
    bool isprime[value+10] = {0};
    for (int i = 3; i < value; i+=2)
    {
        if (!isprime[i])
        {
            for (int j = i * i; j < value; j += i)
            {
                isprime[j]=true;
            }
        }
    }
    primes.push_back(2);
    for(int i=3;i<value;i+=2)
    {
        if(!isprime[i])
        {
            primes.push_back(i);
        }
    }
}
void segmented_seive(int left,int right)
{
    bool isprime[(right-left)+5]={0};
    for(int i=0;primes[i]*primes[i]<right&&i<primes.size();i++)
    {
        int base=(left/primes[i])*primes[i];
        if(base<left) base+=primes[i];
        for(int j=base;j<right;j+=primes[i])
        {
            if(!isprime[j-left])
            {
                isprime[j-left]=true;
            }
        }
    }
    for(int i=left;i<right;i++)
    {
        if(!isprime[i-left])  ans.push_back(i);
    }
}
int main()
{
    int left,right;
    cin >> left >> right;
    int temp=(int)sqrt(right);
    seive(temp);
    segmented_seive(left,right);
    return 0;
}
