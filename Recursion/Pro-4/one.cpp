/*
Smallest Element is 10
*/

#include<bits/stdc++.h>
using namespace std;
int smallest_element(int n, int arr[]){

   if(n==1) return arr[0];

   return min(arr[n-1], smallest_element(n-1, arr));
}
int main(){

   int arr[] = {10, 45, 78, 34, 67};

   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<"Smallest Element is "<<smallest_element(n, arr);
}