#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    // if(n==0) return 1;
    // int count = 0;
    // while(n>0){
    //     n = n/10;
    //     count++;
    // }
    // return count;

    return floor(log10(n) + 1); 

    if(n/10 == 0)  return 1;
    return 1+countDigits(n/10);
}   

int main(){
    int n = 14332;
    cout<< countDigits(n) << endl;

    return 0;
}