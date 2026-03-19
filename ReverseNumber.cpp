#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Brute force approach

// int main(){
//     int n = 123459;
//     string str =to_string(n);
//     reverse(str.begin(), str.end());
//     int reversedNumber = stoi(str);
//     cout<<reversedNumber <<endl;
//     return 0;


// }

// optimal code
int main(){
    int n=123490;
    int reverseNumber=0;

    while(n>0){
        int digit =n% 10;
        reverseNumber=reverseNumber*10+digit;
        n=n/10;
    }
    cout<<reverseNumber<<endl;
    return 0;
}