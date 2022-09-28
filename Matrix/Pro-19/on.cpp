/*



*/
#include<bits/stdc++.h>
using namespace std;

int disjoint(int arr1[], int arr2[], int n, int m){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                return 0;   
            }
        }
    }
    return 1;
}

int main(){
    
    int arr1[] = {10, 20, 30, 67};
    int arr2[] = {20, 90, 80, 77, 23};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    if(disjoint(arr1, arr2, n, m))
    cout<<"Yes";
    
    else cout<<"No";
    
}