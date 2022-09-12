/*
Search Element in the matrix
Input :
3
1 2 3
4 5 6
7 8 9
3

Output :
Element found at (0, 2) position

*/


#include<bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin >>n;

   int a[n][n];
   for(int i=0; i>a[i][j];
   

  int search;
  cin>>search;

  bool flag=0;
  int i=0, j=n-1;
  
  while (i < n && j >= 0)
    {
       if (a[i][j] == search)
        {
           cout<<"Element is found at ("< search)
            j--;
        else
            i++;
    }

  if(flag==0)
  cout<<"Not found";
  return 0;
}