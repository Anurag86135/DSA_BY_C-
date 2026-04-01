// Common element from two arrays

#include<iostream>
using namespace std;

int main(){

    int arr1[]={2,3,4,8};
    int arr2[]={4,3,5,67,8};

    int n1=5,n2=6;

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}

// 