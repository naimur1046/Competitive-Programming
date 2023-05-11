#include <bits/stdc++.h>
using namespace std;
const int mx=1e6+10;
bool prime[mx];
vector<int> PrimeNumber;
void SieveOfEratosthenes()
{
    for (int p = 3; p * p <= mx; p+=2)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= mx; i += p)
                prime[i] = false;
        }
    }
    for(int i=3;i*i<mx;i+=2)
    {
        if(prime[i]) PrimeNumber.push_back(i);
    }

}

int main()
{
    for(int i=0;i<mx;i++) prime[i]=true;
    SieveOfEratosthenes();
    for(int i=0;i<100;i+=1) cout << "Test " << PrimeNumber[i] << endl;
}
