#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int element){
    int low = 0;
    int high=n-1;

    while(low<=high){
        int mid =(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }else if(arr[mid]>element){
            high=mid-1;
        }else{
            low=mid+1;
        }
        }
        return -1;
    }
    
        int main(){
            int arr[]={4,5,6,7,9,99,890};// should besorted
            int n=sizeof(arr)/sizeof(arr[0]);
            int element=99;

            int SearchInd=BinarySearch(arr,n,element);
            if(SearchInd==-1){
                cout<<"Element not found in the given array."<<endl;}

            else{
                cout<<"Element found at the index : " << SearchInd<<endl ;
            }
            return 0;
        }
    


