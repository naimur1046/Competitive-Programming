#include<bits\stdc++.h>
using namespace std;
void merge(int ara[],int mid,int l,int r)
{
    int n1=mid-l;
    int n2=r-mid;
    int ara1[n1];
    int ara2[n2];
    for(int i=0;i<n1;i++)
    {
        ara1[i]=ara[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        ara2[j]=ara[mid+j+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1&&j<n2)
    {
        if(ara1[i]<ara2[j])
        {
            ara[k]=ara1[i];
            i++;
            k++;
        }
        else
        {
            ara[k]=ara2[j];
            j++;
            k++;
        }
    }
    if(i<n1)
    {
        ara[k]=ara1[i];
        i++;
        k++;
    }
    if(j<n2)
    {
        ara[k]=ara2[j];
        j++;
        k++;
    }
    
}
void merge_sort(int ara[],int l, int r)
{
    while (l<r)
    {
        int mid=(l+r)/2;
        merge_sort(ara,l,mid);
        merge_sort(ara,mid+1,r);
        merge(ara,mid,l,r);
    }
}
int main()
{
    int n;
    cin >> n;
    int ara[n];
    for(int i=0;i<n;i++)
    {
        cin >> ara[i];
    }
    merge_sort(ara,0,n);
}
