#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,3,4,1,5};
    int n=sizeof(arr)/ sizeof(arr[0]);

    for(int i=0;i<n;i++){
        bool isDuplicate =false;


        for(int j=i+1;j<n;j++){
            if(arr[i] ==arr[j]){
                isDuplicate=true;
                break;
            }
        }
        if(isDuplicate){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}