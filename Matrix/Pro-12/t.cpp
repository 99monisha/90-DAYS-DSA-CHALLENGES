/*

Code for Median of two Sorted arrays of equal size
Input :
5
1 12 15 26 38
2 13 17 30 45

Output :
16
*/

#include <bits/stdc++.h>
using namespace std;

int getMedian(int ar1[], int ar2[], int n)
{
    int i = 0;
    int j = 0;
    int count;
    int m1 = -1, m2 = -1;

    for (count = 0; count <= n; count++){
        if (i == n){
           m1 = m2;
           m2 = ar2[0];
           break;
    }
    else if (j == n){
          m1 = m2;
          m2 = ar1[0];
          break;
    }
    if (ar1[i] <= ar2[j]){
       m1 = m2;
       m2 = ar1[i];
       i++;
    }
    else{

        m1 = m2;
        m2 = ar2[j];
        j++;
     }
  }
   return (m1 + m2)/2;
}
int main()
{
   int n;
   cin>>n;

   int arr1[n], arr2[n];

   for(int i=0; i<n; i++)
      cin>>arr1[i];

   for(int i=0; i<n; i++)
      cin>>arr2[i];

   getMedian(arr1, arr2, n);

   return 0;
}