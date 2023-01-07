#include<bits\stdc++.h>
using namespace std;
const int N= 1e5+10;
vector<int> numbers(N);
vector<int> ans;
void counting_sort(int n,int mxvalue)
{
    for(int i=0;i<mxvalue;i++)
    {
        for(int j=numbers[i];j>0;j--)
        {
            ans.push_back(i);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int mxvalue;
    cin >> mxvalue;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        numbers[a]++;
    }
    counting_sort(n,mxvalue);
}
