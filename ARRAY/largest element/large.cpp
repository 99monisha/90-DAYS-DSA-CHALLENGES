#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int largest=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        largest=a[i];
    }
    cout<<largest;
    return 0;
}