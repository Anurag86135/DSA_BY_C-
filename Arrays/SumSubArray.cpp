#include<iostream>
using namespace std;

// int main(){
//     int arr[]={1,2,33,4,5};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int target=35;

//     for(int i=0;i<n;i++){
//         int sum =0;
//         for(int j=i;j<n;j++){
//             sum += arr[j];
        

//         if(sum ==target){
//             cout<<"SubArray: "<<endl;
//             cout<<"{";
        

//         for(int k=i;k<=j;k++){
//             cout<<arr[k] <<" ";


//         }
//         cout<<"}";
//         cout<<endl;

//     }
// }
//     }
// return 0;
// }

// Optimal solution  / Approach

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int target =33;

    int start =0;
    int sum =0;

    for(int end=0;end<n;end++){
        sum+=arr[end];

        // Remove elements if sum becomes greater

        while(sum > target && start <=end){
            sum-=arr[start];
            start++;
        }

        // if sum matches target

        if(sum ==target){
            cout<<"SubArray: ";
        

        for(int i=start;i<=end;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
return 0;
}



