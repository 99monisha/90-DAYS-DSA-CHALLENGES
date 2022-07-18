#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int  even=0,odd=0;
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        even++;
    }
    else{
        odd++;
    }
    cout<<"event numbers:"<<even<<"odd numbers:"<<odd<<endl;

    }
    return 0;
}