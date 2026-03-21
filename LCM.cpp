#include<iostream>
using namespace std;

// Optimal approach
// int  gcd(int a, int b){
//     while(b!=0){
//         int temp =b;
//         b=a%b;
//         a=temp;
//     }
//     return a;

// }

// int lcm(int a,int b){
//     return (a* b)/gcd(a,b);

// }

// Brute Approach

int lcm(int a,int b){
    int maxNum =(a>b) ? a:b;

    while(true){
    if(maxNum % a==0 && maxNum % b ==0){
        return maxNum;
    }
    maxNum++;
}
}
int main(){
    int a, b;
    cin>>a>>b;
    cout<<lcm(a,b);
    return 0;
}
