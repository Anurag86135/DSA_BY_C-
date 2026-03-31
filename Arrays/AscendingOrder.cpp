#include<iostream>
#include<set>
using namespace std;


// int main(){
//     int arr[]={2,6,4,5,3,1};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//     }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// Optimal approach

int main(){
    int arr[]={2,3,44,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

   set<int>s;
   for(int i=0;i<n;i++){
    s.insert(arr[i]);
   }
    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}

