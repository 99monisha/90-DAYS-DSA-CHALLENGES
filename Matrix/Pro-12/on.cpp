/*
Code for Median of two Sorted arrays of equal size
Input :
5
1 12 15 26 38
2 13 17 30 45

Output :
16
*/

#include<bits/stdc++.h>
using namespace std;

int getMedian(int ar1[], int ar2[], int n)
{
    int j = 0;
    int i = n - 1;
    while (ar1[i] > ar2[j] && j < n && i > -1)
        swap(ar1[i--], ar2[j++]);

    sort(ar1, ar1 + n);
    sort(ar2, ar2 + n);

    return (ar1[n - 1] + ar2[0]) / 2;
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

   cout<<getMedian(arr1, arr2, n);

   return 0;
}