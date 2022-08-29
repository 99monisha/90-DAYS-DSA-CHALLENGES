#include<iostream>
#include<math.h>
using namespace std;

int main(){
    
    int n=7, x=2;
    int count = 0;
    
    for(int i=1; i<=n; i++){
        int cf= 0;
        for(int j = 1; j<=sqrt(i); j++){
            if(i%j==0){
                if(i/j != j)
                    cf+= 2;
                else
                    cf++;
            }
        }
        
        if(cf== x)
            count++;
    }
    
    cout<<count;
}