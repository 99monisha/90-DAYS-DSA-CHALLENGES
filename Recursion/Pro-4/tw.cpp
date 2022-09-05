#include<bits/stdc++.h>
using namespace std;

int smallest_element(int n, int arr[]){

   int min_element = INT_MAX;

   for(int i=0; i<n; i++)
     min_element = min(arr[i], min_element);

   return min_element;
}

int main(){

   int arr[] = {10, 45, 78, 34, 67};

   int n = sizeof(arr)/sizeof(arr[0]);
 
   cout<<"Smallest Element is "<<smallest_element(n, arr);
}