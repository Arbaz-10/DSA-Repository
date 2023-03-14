// C++ Program to convert decimal number to binary💥💥💥

#include<bits/stdc++.h>
using namespace std;

long long convertDecimalToBinary(int n){     // long long binary = 0 | rem, i=1
    long long binary = 0;
    int rem, i = 1;

    while(n != 0){              // n!=0 | rem = n%2 | n /= 2 | binary += rem * i | i *= 10
        rem = n%2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}

int main(){
    int n, binary;
    cout << "Enter a Decimal Number: ";
    cin >> n;
    binary = convertDecimalToBinary(n);
    cout << n << " = " << binary << endl;

    return 0;
}




#include<bits/stdc++.h>
using namespace std;

int convertBinaryToDecimal(int n){  
    int dec=0, i=0, rem;
    while(n != 0){
        rem = n%10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
}

int main(){
    long long n;
    cout << "Enter a Binary Number: ";
    cin >> n;
    cout << n << " = " << convertBinaryToDecimal(n);

    return 0;
}  