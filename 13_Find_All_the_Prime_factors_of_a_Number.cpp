#include<iostream>
using namespace std;

// worst case -> O(n) --> linear T.C
// void primeFactors(int n){
//     int i=2;
//     while(n>1){
//         while(n%i==0){
//             cout << i << " ";
//             n = n/i;
//         }
//         i++;
//     }
// }


// Best T.C -> O(root(n) log n) -> efficient
void primeFactors(int n){
    int i=2;
    while(i*i <= n){
        while(n%i == 0){
            cout << i << endl;
            n = n/i;
        }
        i++;
    }
    if(n>1){
        cout << n << endl;
    }
}

int main(){
    int n;  cin >> n;
    primeFactors(n);

    return 0;
}