#include<iostream>
using namespace std;


bool isLeap(int year){
    if(year%4 ==0){
        if(year%100 ==0){
            if(year%400 == 0){
                return true;
            }else{
                return false;
            }
        }else{
            return true;
        }
    }
    return false;
}

int main(){
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(isLeap(year)){
        cout<<"Leap year";
    }else{
        cout<<"Not a Leap Year";
    }
}