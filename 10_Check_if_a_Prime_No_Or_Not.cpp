#include<bits/stdc++.h>
using namespace std;

// O(n) -> linear time complexity
// int prime(int n){
//     for(int i=2; i<=n/2; i++){      
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// Time Complexity - O(root(n)) -> Efficent
// int prime(int n){
//     for(int i=2; i<=sqrt(n); i++){      
//         if(n%i == 0) return false;
//     }
//     return true;
// }

// O(root(n)) -> much more efficient code
int isprime(int n){
    if(n==1)  return false;
    if(n==2 || n==3)  return false;
    if(n%2==0 || n%3==0)  return false;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0)  return false;
    }
    return true;
}

// O(n*root(n)) -> T.C -> not efficient
int printPrime(int n){
    for(int i=2; i<=n; i++){
        if(isprime(i)){
            cout << i << endl;
        }
    }
}


int main(){
    int n; cin >> n;
    // cout << prime(n) << endl;
    // cout << isprime(n) << endl;

    return 0;
}