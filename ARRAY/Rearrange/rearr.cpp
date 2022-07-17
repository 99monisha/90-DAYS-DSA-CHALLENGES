/*
rearrange the degits

*/
#include<bits/stdc++.h>
using namespace std;
void rearrangr(int a[],int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
    if(a[i]<0)
    {
        if(i!=0)
        
            swap(a[i],a[j]);
            j++;
        
    }
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    print(a,n);
    rearrangr(a,n);
    print(a,n);
    return 0;
}