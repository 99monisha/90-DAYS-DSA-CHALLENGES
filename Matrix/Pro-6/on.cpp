#include<bits/stdc++.h>
using namespace std;

int main(){

   bool mat[4][4] = { {0, 0, 0, 1}, 
                      {0, 1, 1, 1}, 
                      {1, 1, 1, 1}, 
                      {0, 0, 0, 0}};

   int max_count=0, index=-1;

   for(int i=0; i<4; i++){
     int count = 0;
     for(int j=0; j<4; j++){
         if(mat[i][j]==1) count++;
         } 
         if(count>max_count){
        max_count = count;
        index = i;
     }
   }

   cout << "Index of row with maximum 1s is " << index;
   return 0;

}