#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr =arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;

        }
        arr[prev+1]=curr;//Placing the current element in its correct position
    }
}

int main(){
    int n=5;
    int arr[]={2,3,5,1,9};
    cout<<"Before the sorting :"<<endl;
    PrintArray(arr,n);
    insertionSort(arr,n);
    cout<<"\nAfter the sorting :"<<endl;
    PrintArray(arr,n);
    return 0;
}