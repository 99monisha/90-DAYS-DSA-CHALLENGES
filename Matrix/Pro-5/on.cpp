/*

Median of the given matrix is 2
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat[3][3] = { {1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    int arr[9], x=0;
    for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           arr[x++] = mat[i][j];
       }
    }

    sort(arr, arr+9);
    cout << "Median of the given matrix is : " << arr[4];
    return 0;
}