#include<iostream>
using namespace std;

//Brute force approach

// bool bPrime(int n){
//     if(n<=1)return false;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;

// }

// Optimal Aprach

bool APrime(int n){
    if(n<=1) return false;

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
       
    } return true;
}

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    if(APrime(n)){
        cout<<"Prime"<<endl;
    }else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}