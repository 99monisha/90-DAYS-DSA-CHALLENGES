/*
Rotate a matrix by 90 degree in clockwise direction

Output
Rotated Matrix is :
13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

   int n=4;
   int mat[n][n]= { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
   for(int i=0; i<n; i++){
     for(int j=0; j<i; j++)
         swap(mat[i][j], mat[j][i]);
    }
   for(int i=0; i<n; i++){
     for(int j=0; j<n/2; j++){
        swap(mat[i][j], mat[i][n-j-1]);
     }
   }
   cout<<"Rotated Matrix :\n";
   for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
       cout<<mat[i][j]<<" ";
     }
     cout<<endl;
   }
   return 0;
}