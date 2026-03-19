#include<iostream>
using namespace std;
// Brute force and iterative approach
// int main(){
//     int n;
//     cout<<"Enter how many terms of fibanacci series you want: "<<endl;
//     cin>>n;
//     int a= 0,b=1;
//     cout<<"Fibonacci Series : ";
//     for(int i=1;i<=n;i++){
//         cout<<a <<" ";
//         int next =a+b;
//         a=b;
//         b=next;
//     }
//     cout<<endl;
//     return 0;
// }

// Recurrsive Approach

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fib(n-1)+ fib(n-2);
}
int main(){
    int n;
    cout<<"Enter how many terms of Fibonacci series you want : ";
    cin>>n;

    cout<<"Fibonacci series ";
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}