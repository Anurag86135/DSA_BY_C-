#include<iostream>
using namespace std;
// (brute force Approach)

int findMax(int arr[],int n){
    for(int i=0;i<n;i++){
        bool isMax =true;
        for(int j=0;j<n;j++){
            if(arr[j]>arr[i]){
                isMax =false;
                break;
            }
        }
        if (isMax) return arr[i];
    }
    return -1;
}

// // Finding Max element in a Array(Optimal force apprach)

// void maxArray(int arr[],int n){
//     int max=arr[0];

//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;

// }

void PArray(int arr[],int n){
    cout<<"Array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={11,82,33,44,97,55,90};
    int n=(sizeof arr/sizeof arr[0]);
    PArray( arr,n);
    cout<<endl;
    cout<<"MAximum Element is :"<<endl;
    // maxArray(arr,n);
    int res=findMax(arr,n);
    cout<<res;
    return 0;
}