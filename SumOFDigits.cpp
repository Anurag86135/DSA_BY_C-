// Find sum of digits of a number.
#include<iostream>
using namespace std;

int SumOFD(int num){
    int sum=0;

    while(num>0){
        int digit =num%10;
        sum =sum+digit;
        num=num/10;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter number : "<<endl;
    cin>>n;

    cout<<"Sum of digits : "<<SumOFD(n);
    return 0;
}