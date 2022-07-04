/*
6
20 56 10 30 21 9
20 56 10 30 21 9 
2
30
*/

#include<bits/stdc++.h>
using namespace std;
int largest(int a[],int n,int k)
{
    sort(a,a+n);
    reverse(a,a+n);
    return a[k-1];
}

void print (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
     print(a,n);
    cin>>k;
    cout<<largest(a,n,k);
   
    return 0;
}