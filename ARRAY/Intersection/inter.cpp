/*
5 3
10 20 30 40 50
10 20 30
INTERSECTION:
10 20 30
*/

#include<bits/stdc++.h>
using namespace std;
void intersection(int a1[],int a2[],int m, int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a1[i]>a2[j])
        {
            a2[j++];
        }
        else if(a1[i]<a2[j])
        {
            a1[i++];
        }
        else
        {
            cout<<a2[j++]<<" ";
            i++;
        }
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
    cout<<"\n INTERSECTION:"<<endl;
    intersection(a1,a2,m,n);
    return 0;
}