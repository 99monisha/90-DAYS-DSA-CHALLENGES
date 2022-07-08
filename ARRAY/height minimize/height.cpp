/*
6 4
2 78 56 4 34 12
68

*/


#include<bits/stdc++.h>
using namespace std;
int minimize(int a[],int n,int k)
{
    sort(a,a+n);
    int ans=a[n-1]-a[0];
    int smallest=a[0]+k;
    int largest=a[n-1]-k;
    for(int i=1;i<n;i++)
    {
        if(smallest<0)
        continue;
        smallest=min(smallest,a[i+1]-k);
        largest=max(largest,a[i]+k);
        ans=min(ans,largest-smallest);
    }
    return ans;
}
int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=minimize(a,n,k);
    cout<<ans;
}