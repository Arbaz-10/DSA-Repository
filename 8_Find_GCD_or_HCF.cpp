#include<iostream>
using namespace std;

// O(min(a+b)) - Linear  Time Complexity
// int gcd(int a, int b){
//     int min = 0;
//     if(a>b) min=b;
//     else min = a;

//     for(int i=min; i>=1; i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
// }

// O(max(a, b))
// int euclid(int a, int b){
//     while(a != b){
//         if(a>b) a=a-b;
//         else b = b-a;
//     }
//     return a;
// }

// Gabreal Lama Gcd -> Optimized Euclid Approach O(log(min(a, b)))
int efficient(int a, int b){
    while(a!=0 && b!=0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a>b)  return a;
    else return b;
}

int main(){
    int a, b;  cin >> a >> b;
    // cout << gcd(a, b) << endl;
    // cout << euclid(a, b) << endl;
    cout << efficient(a, b) << endl;

    // int a, b, min=0;
    // cin >> a >> b;
    // if(a<b) min = a;
    // else min = b;

    // for(int i=min; i>=1; i--){
    //     if(a%i==0 && b%i==0){
    //         cout << i << endl;
    //         break;
    //     }
    // }

    return 0;
}