#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n){

    for(int i=0;i<n-1;i++){
        int smallestIdx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx =j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=5;
    int arr[]={4,3,5,2,3};

    SelectionSort(arr,n);
    PrintArray(arr,n);
    return 0;
}