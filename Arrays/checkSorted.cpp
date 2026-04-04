#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,7,4,5};
    int n=5;
    bool sorted=true;

    for(int i=0;i<n-1;i++){
        if(arr[i] >arr[i+1]){
            sorted =false;
            break;
        }
    }

    if(sorted){
        cout<<"Array is sorted 😀"<<endl;

    }
    else{
        cout<<"Your Array is not sorted bro!🧐";
    }
}