/*
Search an element in a matrix
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
   cin>>n;

   int a[n][n];
   for(int i=0; i< n; i++){
     for(int j=0; j< n; j++)
       cin>>a[i][j];
   }

  int search;
  cin>>search;

  bool flag=0;

  for(int i=0; i< n; i++){

    for(int j=0; j< n; j++){
        if(a[i][j]==search)
        {
          cout<<"Element is found at ("<< i<<", "<< j<<") position";
          flag=1;
          break;
        }
    }

    if(flag==1)
    break;
  }

  if(flag==0)
  cout<<"Not found";
}