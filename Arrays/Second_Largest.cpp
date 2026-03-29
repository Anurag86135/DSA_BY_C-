#include<iostream>
using namespace std;

int SecondLargest(int arr[], int n){
    int largest =arr[0];
    int second =-1;

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];

        }
        else if(arr[i]<largest && arr[i] >second){
            second =arr[i];
        }
    }
    return second;
}
int main(){
    int arr[]={1,2,33,4,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Second Largest Element : "<<SecondLargest(arr,n);
    return 0;
}