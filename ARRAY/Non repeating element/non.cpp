#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    int visited[n];
    for(i=0;i<n;i++)
    {
        if(visited[i]!=1)
        {
            int count=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j]){
                count++;
                visited[j]=1;
            }
        }
        if(count==1)
        cout<<a[i]<<" ";
        }
    }

    return 0;
}