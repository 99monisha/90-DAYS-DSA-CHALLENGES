#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
int large=a[0];
for(i=0;i<n;i++){
    if(a[i]>large)
    large=a[i];
}
int sec_large=INT_MIN;
for(i=0;i<n;i++)
{
    if(a[i]!=large && a[i]>sec_large)
    sec_large=a[i];
}
cout<<sec_large;
    return 0;
}