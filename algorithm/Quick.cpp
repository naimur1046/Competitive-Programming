#include <bits\stdc++.h>
using namespace std;
vector<int> numbers;
int partition(int l, int h)
{
    int pivot = numbers[l];
    int i = l;
    int j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (numbers[i] <= pivot);
        do
        {
            j--;
        } while (numbers[j] > pivot);
        if(i<j)
        swap(numbers[i], numbers[j]);
    }
    swap(numbers[j],numbers[l]);
    return j;
}
void quick_sort(int l, int h)
{
    if (l < h)
    {
        int j = partition(l, h);
        quick_sort(l, j);
        quick_sort(j + 1, h);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    quick_sort(0,n);
    for(int i=0;i<n;i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}
