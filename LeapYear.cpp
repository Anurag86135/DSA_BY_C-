#include<iostream>
using namespace std;

// Brute force approach

// bool isLeap(int year){
//     if(year%4 ==0){
//         if(year%100 ==0){
//             if(year%400 == 0){
//                 return true;
//             }else{
//                 return false;
//             }
//         }else{
//             return true;
//         }
//     }
//     return false;
// }

bool isLeap(int year){
    return (year % 4 ==0 && year % 100 !=0)|| (year % 400 == 0);
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