#include<iostream>
using namespace std;

int AvgArray(int arr[],int n){
    int total=0;
    int avg=0;

    for(int i=0;i<n;i++){
        total+=arr[i];

    }
    avg=total/n;
    return avg;

}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Average of the element of the array is :"<<AvgArray(arr,n);
    return 0;
}