#include<bits/stdc++.h>
using namespace std;

//  O(a*b - max(a, b)) -> Bruitforce Approach
// int lcm(int a, int b){
//     int res = max(a, b);
//     while(true){
//         if(res%a==0 && res%b==0) break;
//         res++;
//     }
//     return res;
// }

// Optimize approach -> euclid-gcd -> O(log(min(a, b)))
int lcm(int a, int b){
    return (a*b)/__gcd(a, b);
}

int main(){
    int a, b;  cin >> a >> b;
    cout << lcm(a, b) << endl;
    return 0;
}