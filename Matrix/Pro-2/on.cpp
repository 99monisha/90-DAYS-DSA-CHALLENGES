/*
Spiral Traversal of a Matrix

1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/


#include <bits/stdc++.h>
#define r 4
#define c 4
using namespace std;

int main()
{   
    int a[4][4] = { { 1, 2, 3, 4 },

                    { 5, 6, 7, 8 },

                    { 9, 10, 11, 12 },

                    { 13, 14, 15, 16 } };

    int i, left = 0, right = c-1, top = 0, bottom = r-1;

    while (left <= right && top <= bottom) {
        for (i = left; i <= right; ++i) {
            cout<<a[top][i]<<" ";
        }
        top++;
        for (i = top; i <= bottom; ++i) {
         cout<<a[i][right]<<" ";
        }
        right--;
        if (top <= bottom) { for (i = right; i >= left; --i) {
            cout<<a[bottom][i]<<" ";
          }
          bottom--;
        }
        if (left <= right) { for (i = bottom; i >= top; --i) {
            cout<<a[i][left]<<" ";
        }
        left++;
        }
    }
    
    return 0;
}