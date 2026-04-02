#include<iostream>
#include<algorithm>
using namespace std;


// int main(){

//     int arr[]={2,3,4,5,6};
//     int n=5;
//     int temp=arr[n-1];

//     for(int i=n-1;i>0;i--){
//         // arr[i+1]=arr[i];
//         arr[i] = arr[i-1];
//     }

//     arr[0]=temp;

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Optimal approach

int main(){
    int arr[]={4,5,6,7,8};
    int n=5;
    int k=2;//Right rotation

    k=k%n;
    reverse(arr,arr+n);
    reverse(arr,arr+k);
    reverse(arr+k,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

