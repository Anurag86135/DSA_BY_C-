#include<iostream>
#include<unordered_set>
using namespace std;

// int main(){
// int arr[]={2,7,11,15};
// int target=9;
// int n=sizeof(arr)/sizeof (arr[0]);

// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]+arr[j] == target){
//             cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )";
//         }
//     }
// }
// return 0;
// }

int main(){
    int arr[]={2,7,11,15};
    int target=9;

    int n= sizeof(arr)/sizeof(arr[0]);

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        int complement =target - arr[i];

        if(s.find(complement)!=s.end()){
            cout<<"( " <<complement <<" , "<<arr[i]<<" )";
        }
        s.insert(arr[i]);
    }
    return 0;
}
