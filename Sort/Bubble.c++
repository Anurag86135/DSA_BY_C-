#include<iostream>
using namespace std;

void bubble(int arr[],int n){

    for(int i=0;i<n-1;i++){
    bool isSwapped=false;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            isSwapped=true;
        }
    }

        if(!isSwapped){
            if(i==0){
            cout<<"No swaps in this pass, array is already sorted"<<endl;
            }else{
                cout<<"Array is sorted now : "<<endl;
            }
        break ;
    }
    }
    
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={9,4,3,2,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    bubble(arr,n);
    PrintArray(arr,n);
    return 0;
}
