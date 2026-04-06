#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof (arr)/sizeof(arr[0]);
    sort(arr,arr+n);

    int minDiff =INT_MAX;

    for(int i=1;i<n;i++){
        minDiff =min(minDiff,arr[i]-arr[i-1]);
    }
    cout<<minDiff;
    return 0;
}