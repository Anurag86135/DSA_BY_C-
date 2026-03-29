#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void CinArray(int arr[],int n){
    cout<<"Enter the values of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int SumArray(int arr[],int n){

    int Total=0;

    for(int i=0;i<n;i++){
    Total +=arr[i];

    }
    return Total;

}
int main(){
    int n;
    cout<<"Enter the value of size (n): "<<endl;
    cin>>n;

    int arr[n];


  

    CinArray(arr,n);
    printArray(arr,n);

    cout<<"Sum of array is : "<<SumArray(arr,n);
    return 0;
}