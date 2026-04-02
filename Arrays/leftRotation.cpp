#include<iostream>
#include<algorithm>
using namespace std;

// int main(){
//     int arr[] ={1,2,3,4,5};
//     int n=5;

//     int temp =arr[0];

//     for(int i=0;i<n-1;i++){
//         arr[i] =arr[i+1];
//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// rotate by k elements 
int main(){
    int arr[] ={1,2,3,4,5};
    int n=5;
    int k=2;

    k=k%n;//handle large k;

    reverse(arr,arr+k);
    reverse(arr+k, arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
