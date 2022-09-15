#include<bits/stdc++.h>
using namespace std;

int first(bool arr[], int low, int high)
{
    if(high >= low)
    {
      int mid = low + (high - low)/2;
      if ( ( mid == 0 || arr[mid-1] == 0) && arr[mid] == 1)
        return mid;

      else if (arr[mid] == 0)
        return first(arr, (mid + 1), high);

      else
        return first(arr, low, (mid -1));
     }
     return -1;
}


int main(){

   bool mat[4][4] = { {0, 0, 0, 1}, {0, 1, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};

   int max_count=0, index=-1;

   for(int i=0; i<4; i++){


     int count = 0;
     int x = first(mat[i], 0, 3);

     if(x!=-1) count = 4-x;
     if(count>max_count){
        max_count = count;
        index = i;
     }
   }

   cout << "Index of row with maximum 1s is " << index;

}