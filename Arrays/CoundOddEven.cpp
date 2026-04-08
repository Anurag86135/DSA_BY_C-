#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int OddCount=0;
    int EvenCount=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            EvenCount++;

        }else{
            OddCount++;

        }
    }
    cout<<"Count of Odd numbers are : "<<OddCount<<endl;
    cout<<"Count of Even numbers are: "<<EvenCount<<endl;
    return 0;
}