/*
50 100
LCM of 50 and 100 is 100
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,lcm,i;
    cin>>m>>n;
     for(i=1;i<=m || i<=n;i++)
     {
        if(m%i==0 && n%i==0)
        lcm=i;
     }
     lcm=(m*n)/lcm;
     cout<<"LCM of "<<m<<" and "<<n<<" is "<<lcm;
    return 0;
}