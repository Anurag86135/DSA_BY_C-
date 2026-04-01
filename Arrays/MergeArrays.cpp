#include<iostream>
using namespace std;


// Basic program

// int main(){
//     int arr1[]={1,2,3};
//     int arr2[]={4,5,6};

//     int n1=3,n2=3;
//     int merged[6];

//     // Copy arr1
//     for(int i=0;i<n1;i++){

//         merged[i]=arr1[i];

//     }
//     // Copy arr2
//     for(int j=0;j<n2;j++){

//         merged[n1+j] =arr2[j];
//     }

//     // Print merged array 
//     for(int i=0;i<n1+n2;i++){
//         cout<< merged[i]<<" ";
//     }
//     return 0;
// }
// Optimal appraoch

int main(){
    int arr1[]={2,4,6 };
    int arr2[]={3,5,7};

    int n1=3,n2=3;
    int merged[6];

    int i=0,j=0,k=0;

    // Merge both arrays

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merged[k++]=arr1[i++];
        }else{
            merged[k++] =arr2[j++];
        }
    }
    // Remaining elements

    while(i < n1){
        merged[k++] = arr1[i++];
    }

    while(j<n2){
        merged[k++] =arr2[j++];
    }

    // Print result
    for(int x=0;x<n1+n2;x++){
        cout<<merged[x]<<" ";
    }
    return 0;
}



