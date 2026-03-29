#include<iostream>
using namespace std;

// brute force approach

// int findMax(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isMax =true;

//         for(int j=0;j<n;j++){
//             if(arr[j]>arr[i]){
//                 isMax = false;
//                 break;
//             }
//         }
//         if(isMax){
//             return arr[i];
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[]={3,7,2,9,5};
//     int n=5;
//     cout<<"Maximum element: "<<findMax(arr,n);
//     return 0;
// }

// Optimal approach

int findMax(int arr[],int n){

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={11,22,93,44,87};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum element of the array is : "<< findMax(arr,n);
    return 0;
}



