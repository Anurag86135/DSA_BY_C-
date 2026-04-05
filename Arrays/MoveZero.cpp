#include<iostream>
using namespace std;

// int main(){
//     int arr[]={0,1,0,3,12};
//     int n=5;
//     int pos=0;//position to place non-zero

//     // Step 1: place non-zero elements
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[pos]=arr[i];
//             pos++;
//         }
//     }
//     // fill remaining positions with 0
//     for(int i=pos;i<n;i++){
//         arr[i]=0;
//     }

//     // Print result
//     cout<<"After moving zeros to end: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     cout<<endl;
        
    
//     }

// }
// Optimal
int main()
{
    int arr[]={0,2,2,5,0};
    int n=sizeof(arr)/sizeof arr[0];

    int j=0;// position for non-zero
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }

    // Print array
    for(int num : arr){
        cout<<num<<" ";
    }
    return 0;

}