#include<iostream>
using namespace std;

// O(n) -> Time-Complexity (i)
// void printDivisors(int n){
//     for(int i=1; i<=n; i++){     // n
//         if(n%i==0){
//             cout << i << " ";
//         }
//     }
// }


// O(root(n)) -> Time-Complexity (n/i)
void printDivisors(int n){
    int i=0;
    for(i=1; i*i<=n; i++){      // root n
        if(n%i==0){
            cout << i << " ";
        }
    }
    for( ; i>=1; i--){
        if(n%i==0 && i != n/i){
            cout << (n/i) << " ";
        }
    }
}

// Observations:
// 1. Divisors can made into pairs
// 2. first divisors in the pair of divisors will always appear before root(n)
// 3. second divisors can be obtained from the first divisors by using (b=n/a)



int main(){
    int n; cin >> n;
    printDivisors(n);
    return 0;
}