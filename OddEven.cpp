#include<iostream>
using namespace std;

//Brute force approach
// void ODDE(){
//     int n;
//     cout<<" Enter a number: ";
//     cin>>n;

//     if(n%2==0){
//         cout<<"Even";
//     }else{
//         cout<<"Odd";
//     }

// }

// Optimal approach 
void ODDE(){
    int n;
    cout<<" Enter a number : ";
    cin>>n;

    if(n & 1){
        cout<<"Odd";
    }else{
        cout<<"Even";
    }

}

int main(){
    ODDE();
    return 0;
}