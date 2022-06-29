#include<bits/stdc++.h>
using namespace std;
void AseDes(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        for(j=n/2;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp; 
            }
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    AseDes(a,n);
    cout<<endl;
    return 0;
}