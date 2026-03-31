#include<iostream>
#include<unordered_set>
using namespace std;

// Missing element brute force approach
// O(n^2)
// int main(){
//     int arr[]={1,2,3,5};
//     int n=5;

//     for(int i=1;i<=n;i++){
//         bool found =false;

//         for(int j=0;j<n-1;j++){
//             if(arr[j] == i){
//                 found =true;
//                 break;
//             }
           
//             }
//              if(found == false){
//                 cout<<i;
//         }
        
//         }
//     return 0;

//     }


// O(n)

// int main(){
//     int arr[]={1,2,4,5};
//     int n=5;

//     unordered_set<int>s;
//     for(int i=0;i<n-1;i++){
//         s.insert(arr[i]);
//     }
//     for(int i=1;i<=n;i++){
//         if(s.find(i)==s.end()){
//             cout<<i;
//         }
//     }
// }

// Formula method

// int main(){
//     int arr[]={1,2,3,5};
//         int n=5;

//         int sum = n*(n+1)/2;
//         int actual=0;
//     for(int i=0;i<n-1;i++){
//         actual +=arr[i];
//     }

//     cout<<sum-actual;
//     return 0;
// }

// Xor method

int main(){
    int arr[]={1,2,3,5};
    int n=5;

    int xor1=0,xor2=0;
    for(int i=1;i<=n;i++){
        xor1^=i;
    }
    for(int i=0;i<n-1;i++){
        xor2^=arr[i];
    }
    cout<<(xor1 ^xor2);
    return 0;
}

