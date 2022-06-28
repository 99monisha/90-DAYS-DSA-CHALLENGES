#include<bits/stdc++.h>
using namespace std;
int reverse(int a[],int start,int end)
{
    while(start<= end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
  }
}
void print(int a[],int size)
{
    for(int i=0;i<size;i++)
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
cout<<"Before Reverse the array:"<<endl;
   print(a,n);
   reverse(a,0,n-1);
   cout<<endl;
   cout<<"After Reverse the array:"<<endl;
   print(a,n);
   return 0;
   }