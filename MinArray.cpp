#include<iostream>
using namespace std;

// brute force apprach
// int minArray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         bool isMin=true;
//         for(int j=0;j<n;j++){
//             if(arr[j]<arr[i]){
//                 isMin=false;
//                 break;

//             }
//         }
//     if(isMin)return arr[i];

//     }
//     return -1;

// }

int minArray(int arr[],int n){
    int Min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<Min){
            Min=arr[i];

        }
    }
    return Min;
}
int main(){
    int arr[]={11,22,44,3,33};
    int n= sizeof arr/sizeof (arr[0]);
    int res= minArray(arr,n);
    cout<<"Minimum Element :"<< res;
    return 0;
}