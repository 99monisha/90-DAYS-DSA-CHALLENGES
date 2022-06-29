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
    int smallest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    int sec_small=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(a[i]!=smallest && a[i]<sec_small)
        {
            sec_small=a[i];
        }
    }
cout<<sec_small;
    return 0;
}