/*

3

*/

#include <iostream>
using namespace std;

int count(int n, int d){
    if(n<=0)
    return 0;
    
    int rem = n%10;
    
    if(rem == d){
        return 1 + count(n/10, d);
    }
    
    return count(n/10, d);
}
int main() {

    int n = 890190798; 
    int d = 9; 
    
    int x = count(n, d);
    cout<<x;

    return 0;

}
