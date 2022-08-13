/*

THE GCD IS 9

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=18,n2=45,gcd=1;
    for(int i=1;i<=n1 || i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    cout<<" THE GCD IS "<<gcd;
    return 0;
}