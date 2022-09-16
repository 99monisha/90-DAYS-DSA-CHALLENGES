/*

Code to Print Elements in Sorted Order
*/

#include<bits/stdc++.h>
using namespace std;
#define n 4

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) 
{ 
    int i = 0, j = 0, k = 0; 

    while (i<n1 && j <n2){ 
       if (arr1[i] < arr2[j]) 
         arr3[k++] = arr1[i++]; 
       else
         arr3[k++] = arr2[j++]; 
    } 

    while (i < n1) 
        arr3[k++] = arr1[i++]; 

    while (j < n2) 
        arr3[k++] = arr2[j++]; 
}

void mergeKArrays(int arr[][n], int i, int j, int output[])
{
    if(i==j)
    {
      for(int p=0; p < n; p++)
       output[p]=arr[i][p];
      return;
     }

     if(j-i==1)
     {
       mergeArrays(arr[i],arr[j],n,n,output);
       return;
     }

     int out1[n*(((i+j)/2)-i+1)],out2[n*(j-((i+j)/2))];

     mergeKArrays(arr,i,(i+j)/2,out1);
     mergeKArrays(arr,(i+j)/2+1,j,out2);
     mergeArrays(out1,out2,n*(((i+j)/2)-i+1),n*(j-((i+j)/2)),output);

}

int main()
{
    int arr[][n] = {{2, 6, 12, 34},{10, 19, 20, 1000},{23, 34, 90, 2000}};
    int k = sizeof(arr)/sizeof(arr[0]);
    int output[n*k];
    mergeKArrays(arr,0,2, output);

    for (int i=0; i < 12; i++)
     cout << output[i] << " ";

    return 0;
}