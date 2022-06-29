#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int smallest=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        smallest=a[i];
    }
    cout<<smallest;
    return 0;
}