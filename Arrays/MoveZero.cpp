#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,0,3,12};
    int n=5;
    int pos=0;//position to place non-zero

    // Step 1: place non-zero elements
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[pos]=arr[i];
            pos++;
        }
    }
    // fill remaining positions with 0
    for(int i=pos;i<n;i++){
        arr[i]=0;
    }

    // Print result
    cout<<"After moving zeros to end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    cout<<endl;
        
    
    }

}