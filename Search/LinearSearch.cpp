#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,3,5,57,3,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element=6;

    int searchIndex=LinearSearch(arr,n,element);
    if(searchIndex == -1){
        cout<<"Elementnot found in the given array."<<endl;

    }
    else{
        cout<<"Element found at index: "<<searchIndex<<endl;
    }
        
    return 0;

}