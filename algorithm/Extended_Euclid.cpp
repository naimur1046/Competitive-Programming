#include<bits\stdc++.h>

using namespace std;
pair<int,int> extended_gcd(int a,int b)
{
    if(b==0) return {1,1};
    auto [x2,y2]=extended_gcd(b,a%b);
    int x=y2,y=x2-((a/b)*y2);
    return{x,y};
}
int main()
{
    int a,b;
    cin >> a >> b;
    auto [x,y]= extended_gcd(a,b);
    cout << x << " " << y << endl;
}
