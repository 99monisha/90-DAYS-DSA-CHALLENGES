/*
5
20 24 4 12 7
20 24 4 12 7 
3
12

*/

#include<bits/stdc++.h>
using namespace std;
int smallest(int a[],int n,int k)
{
sort(a,a+n);
return a[k-1];

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
    int n,i,k;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
  print(a,n); 
    cin>>k;
    cout<<smallest(a,n,k);
return 0;
}