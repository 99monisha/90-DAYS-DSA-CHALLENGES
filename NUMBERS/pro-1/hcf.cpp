/*

50 100
HCF of 50 and 100 is 50

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,i;
int hcf=1;
cin>>n>>m;
for(i=1;i<=n || i<=m;i++)
{
    if(n % i==0 && m %i ==0)
    hcf=i;
}
cout<<" HCF of " <<n<<" and "<<m<<" is "<<hcf;

    return 0;
}