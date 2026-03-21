#include<iostream>
#include<math.h>
using namespace std;

// void countDigitBrute(){

//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;

//     int count =0;
//     if(n==0) count =1; //edge case for 0

//     while(n!=0){
//         n=n/10;
//         count++;
//     }

//     cout<<" Number of digits : "<<count <<endl;

// }

void countDigit(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n==0){
         cout<<"Number of digits : 1"<<endl;
         return ;
}
n=abs(n);

int digits=floor(log10(n))+1;
cout<<"Number of digits: "<<digits <<endl;
}

int main(){
    // countDigitBrute();/
    countDigit();

    return 0;
}