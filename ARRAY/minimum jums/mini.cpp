/*
6
1 3 6 1 0 9
Minum jums to reach end of the array:3

*/


#include<bits/stdc++.h>
using namespace std;
int minjumps(int a[],int n)
{
    int jumps[n];
    int i,j;
    if(n==0 || a[0]==0)
    return INT_MAX;
    jumps[0]=0;
    for(i=1;i<n;i++){
    jumps[i]=INT_MAX;
    
      for(j=0;j<i;j++)
      {
        if(i<=j+a[j] && jumps[j]!=INT_MAX)
        {
            jumps[i]=min(jumps[i],jumps[j]+1);
            break;
        }
      }
    }
    return jumps[n-1];
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Minum jums to reach end of the array:"<<minjumps(a,n);
    return 0;
}