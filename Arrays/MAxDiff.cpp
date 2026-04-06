#include<iostream>
#include<climits>
using namespace std;
// int main(){
//     int arr[]={2,3,10,6,4,8,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int maxDiff =INT_MIN;

// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         maxDiff =max(maxDiff, arr[j] -arr[i]);
//     }
// }

// cout<<maxDiff;
// return 0;
// }


int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n= sizeof(arr) /sizeof(arr[0]);

    int minElement =arr[0];
    int maxDiff =INT_MIN;

    for(int i=0;i<n;i++){
        maxDiff=max(maxDiff,arr[i] - minElement);
        minElement =min(minElement,arr[i]);

    }
    cout<<maxDiff;
    return 0;
}
