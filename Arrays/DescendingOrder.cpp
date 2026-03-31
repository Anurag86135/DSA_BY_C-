#include<iostream>
#include<algorithm>
using namespace std;
// Descending Order
// int main(){

//     int arr[]={1,2,3,4,5,3};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Optimal approach

int main(){
    int arr[]={1,2,3,4,5,6,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n,greater<int>());

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}