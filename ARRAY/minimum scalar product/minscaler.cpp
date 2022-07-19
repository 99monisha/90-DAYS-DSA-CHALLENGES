/*
149
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
   int a1[]={1,2,6,3,7};
    int a2[]={10,7,45,3,7};
    int n=sizeof(a1)/sizeof(a1[0]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a1[i]>a1[j])
            {
                int temp=a1[i];
                a1[i]=a1[j];
                a1[j]= temp;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a2[i]<a2[j])
            {
                int temp=a2[i];
                a2[i]=a2[j];
                a2[j]= temp;
            }
        }
    }

    int product =0;
    for(i=0;i<n;i++)
    
        product+=a1[i]*a2[i];
    
    cout<<product;
    return 0;
}