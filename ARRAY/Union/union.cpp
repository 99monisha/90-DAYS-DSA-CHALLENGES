/*
5 3 
1 2 3 4 5
1 2 3
UNION: 1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

void printunion(int a1[],int a2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a1[i]>a2[j])
        {
            cout<<a2[j++]<<" ";
        }
        else if(a1[i]<a2[j])
        {
            cout<<a1[i++]<<" ";
        }
        else
        {
            cout<<a2[j++]<<" ";
            i++;
        }
    }
    while(i<m)
    {
        cout<<a1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<a2[j++]<<" ";
    }
}

int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a1[m],a2[n];
    for(i=0;i<m;i++)
    {
        cin>>a1[i];
    }
    for(j=0;j<n;j++)
    {
        cin>>a2[j];
    }
    cout<<" \nUNION:"<<" ";
    printunion(a1,a2,m,n);
    return 0;
}