const int mx=1e7;
int status[(mx/32)+5];
vector<int> primes;
int change(int a,int b)
{
    return a|(1<<b);
}
bool check(int a,int b)
{
    return a&(1<<b);
}
void solve()
{
    for(int i=3;i*i<mx;i+=2)
    {
        if(!check(status[i/32],i%32))
        {
        for(int j=i*i;j<=mx;j+=i)
        {
            status[j/32]=change(status[j/32],j%32);
        }
        }
    }
    primes.push_back(2);
    for(int i=3;i<mx;i+=2)
    {
        if(!check(status[i/32],i%32))
        {
            primes.push_back(i);
        }
    }
}
