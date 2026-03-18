#include<iostream>
using namespace std;

// Recursive Approach

// int fact(int n){
//     if(n==0||n==1)
//         return 1;

    
// return n*fact(n-1);
// }

//Iterrative or optimal approach
void factorial(){
    int num = 5;
    int fact=1;

    for(int i=1;i<=num;i++){
        fact *= i;
    }
    cout<<fact;
}



int main(){
    // int n;
    // cin>>n;
//    cout<< fact(n);
factorial();
    return 0;
}



