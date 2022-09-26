/*
Input :
10
2 89 34 16 17 10 11 78 30 19
15 20

Output :
2 10 11 16 17 19 30 34 89 78

*/


#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];

  int low, high;
  cin>>low>>high;

  sort(a, a+n);

  for(int i=0; i<n; i++)
  cout<<a[i]<<" ";
  return 0;

}