#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

// int main(){
//     int arr[]={1,2,3,4,2,4,1,5};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     set<int> s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }

//     for(auto x :s ){
//         cout<<x<<" ";
//     }


// }

// Sorting method;

int main(){
    int arr[]={1,2,3,4,5,5,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
}
