#include<bits/stdc++.h>
using namespace std;

int main(){

   int n=4, m=4;
   int mat[n][m]= { { 1, 20, 43, 14 },{ 50, 69, 17, 81 },{ 99, 10, 11, 22 },{ 13, 54, 95, 16 } };

   int arr[n*m], x=0;

   for(int i=0; i<n; i++){
       for(int j=0; j<m; j++){
            arr[x++]=mat[i][j];
       }
    }

    int size = n*m;
    sort(arr, arr+size);

   for(int i=0; i<size; i++)
         cout<<arr[i]<<" ";
}