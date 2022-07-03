#include<bits/stdc++.h>
using namespace std;
bool pairsum(int a[], int n,int k)
{
    
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
    int k;
    cin>>k;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<a[i]<<" "<<a[j];
                return true;
            }
            else if(a[i]+a[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
return 0;
}