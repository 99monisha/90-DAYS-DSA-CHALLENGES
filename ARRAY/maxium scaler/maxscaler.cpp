/*
413
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1[]={1,2,6,3,7};
    int a2[]={10,7,45,3,7};
    int n=sizeof(a1)/sizeof(a1[0]);
    sort(a1,a1+n);
    sort(a2,a2+n);
    int product=0;
    for(int i=0;i<n;i++)
    product+=a1[i]*a2[i];
    cout<<product;
    return 0;
}