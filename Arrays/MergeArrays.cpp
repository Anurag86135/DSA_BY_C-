#include<iostream>
using namespace std;


// Basic program

int main(){
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};

    int n1=3,n2=3;
    int merged[6];

    // Copy arr1
    for(int i=0;i<n1;i++){

        merged[i]=arr1[i];

    }
    // Copy arr2
    for(int j=0;j<n2;j++){

        merged[n1+j] =arr2[j];
    }

    // Print merged array 
    for(int i=0;i<n1+n2;i++){
        cout<< merged[i]<<" ";
    }
    return 0;
}

