#include<bits/stdc++.h>
using namespace std;

// void sieveOfPrimes(int n){
//     bool prime[n+1];
//     // for(int i=2; i<=n; i++){
//     for(int i=2; i*i<=n; i++){
//         if(prime[i]==false){
//             // for(int j=i*2; j<=n; j+=i) prime[j] = true;
//             for(int j=i*i; j<=n; j+=i) prime[j] = true;
//         }
//     }
//     for(int i=2; i<=n; i++){
//         if(prime[i]==false) cout << i << " ";
//     }
// }

// Time Complexity - O(nlog(log(n))) -> O(root(n)) - much more efficent
void sieveOfPrimes(int n){
    bool prime[n+1];
    for(int i=2; i*i<=n; i++){
        if(prime[i]==false){
            for(int j=i*i; j<=n; j+=i)  prime[j] = true;
        }
    }
    for(int i=2; i*i<=n; i++)  cout << i << " ";
}

int main(){
    int n; cin >> n;
    sieveOfPrimes(n);
    // cout << sieveOfPrimes(n) << endl;
    return 0;
}