#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num=153;
    int sum=0;
    int copy_num=num;
    int lenth = to_string(num).length();
    // cout<<lenth;
    
    for(int i=1;i<=lenth;i++){

        int digit=num%10;
        sum  = sum+  int(pow(digit,lenth));
        num /=10;

    }
    // cout<< sum;
    if(sum == copy_num){
        cout<<copy_num <<" is an Armstrong number. "<<endl;

    }
    else{
        cout<<copy_num<<" is not an Armstrong number ."<<endl;
    }
    return 0;

}

