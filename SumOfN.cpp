#include<iostream>
using namespace std;
// Brute force
// int SumN(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//           sum += i;
//     }
//     return sum;

// }

// Optimal Approach
int SumN(int n){
    return (n*(n+1))/2;

}



int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<"Sum = "<<SumN(n);
    return 0;
}