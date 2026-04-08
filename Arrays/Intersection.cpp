#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;

// int main(){
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={2,3,44,56};

//     int n1= sizeof(arr1)/sizeof(arr1[0]);
//     int n2= sizeof(arr2)/sizeof (arr2[0]);

//     cout<<" Intersection: "<<endl;
//     for(int i=0;i<n1;i++){
//         for(int j=0;j<n2;j++){
//             if(arr1[i] == arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 break;
//             }
//         }
//     }
//     return 0;
    
// }

// Optimal Appraoch

// int main(){
// int arr1[]={1,2,3,4,5};
// int arr2[]={3,4,5,6,7};

// int n1= sizeof(arr1)/sizeof(arr1[1]);
// int n2= sizeof(arr2)/sizeof (arr2[1]);

// sort(arr1,arr1+n1);
// sort(arr2,arr2+n2);

// int i=0,j=0;
// cout<<" Intersection: "<<endl;
// while(i<n1 && j<n2){
//     if(arr1[i] < arr2[j]){
//         i++;
//     }
//     else if(arr1[i]> arr2[j]){
//         j++;
//     }
//     else{// arr1[]==arr2[]
//         cout<<arr1[i]<<" ";
//         i++;
//         j++;
//     }
// }
// return 0;
// }

// Hashmap approach

int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    unordered_set<int> s;
    // Store arr1 elements 
    for(int i=0;i<n1;i++){
        s.insert(arr1[i]);
    }

    cout<<"Intersection : "<<endl;
    for(int i=0;i<n2;i++){
        if(s.find(arr2[i])!=s.end()){
            cout<<arr2[i]<<" ";
        }
    }
    return 0;
}
