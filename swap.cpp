#include<iostream>
using namespace std;

void Swap(){
    int a,b;
    cout<<"Enter the To random numbers :";
    cin>>a>>b;
//  Using Addition and substraction
    // a=a+b;
    // b=a-b;
    // a=a-b;


// Using multiplication and Division

        // a=a*b;
        // b=a/b;
        // a=a/b;

// Using XOR (BEst Method)

    a=a^b;
    b=a^b;
    a=a^b;

cout<<"a : "<<a<<" "<<"b :"<<b;
    
}

int main(){
    Swap();
    return 0;

}