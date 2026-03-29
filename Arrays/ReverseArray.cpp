#include<iostream>
using namespace std;

void Reverse(int arr[],int n){
    for(int i=n-1;i>=0;i--){

       cout<<arr[i]<<" ";

    }
}
int main(){

int arr[]= {11,22,33,44,90};
int n=sizeof(arr)/sizeof(arr[0]);

cout<<"Reversed Array: ";
Reverse(arr,n);
return 0;




}