#include<iostream>
#include<unordered_map>
using namespace std;

// Optimal approach
// int main(){
//     int arr[]={1,2,2,3,4,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);

//     unordered_map<int , int> freq;
//     // Count frequency
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }

// //Print unique elements
// cout<<"Unique elements are: ";
// for(int i=0;i<n;i++){
//     if(freq[arr[i]]==1){
//         cout<<arr[i]<< " ";
//     }
// }
// return 0;
// }

// Brute force

int main(){
    int arr[]={1,2,2,3,4,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++){
    int count = 0;
     for(int i=0;i < n;i++){
        if(arr[i] == arr[j])
        {
            count++;
        }
     }
     if(count ==1){
        cout<<arr[j]<<" ";
     }
        
    }
     return 0;

}