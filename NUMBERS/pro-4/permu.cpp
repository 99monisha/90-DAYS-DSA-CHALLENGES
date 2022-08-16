#include<bits/stdc++.h>
using namespace std;
int factorial(int num)
{
    int fact=1;
    for(int i=num;i>=1;i--)
    fact*=i;
    return fact;
}
int main()
{
int n,r;
cout<<"Enter the number of people: "<<endl;
cin>>n;
cout<<"Enter the number of seates: "<<endl;
cin>>r;
int p=factorial(n)/factorial(n-r);
cout<<"The possible number is: "<<p;
    return 0;
}