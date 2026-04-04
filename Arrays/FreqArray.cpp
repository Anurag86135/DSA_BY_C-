#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

// int main(){

//     int arr[]={1,22,33,44,33,22,22,22};
//     int n= (sizeof (arr)/sizeof arr[0]);

//     int count=0;
//     int element=22;
//     for(int i=0;i<n;i++){
//         if(arr[i]==element){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }

// Brute forcce
// int main(){
//     int arr[]={1,2,2,3,1,4,2};
//     int n=7;

//     for(int i=0;i<n;i++){
//         // Check pehle aya hai ya nahi
        
//         bool visited =false;
//         for(int k=0;k<i;k++){
//             if(arr[i] == arr[k]){
//                 visited =true;

//             }
//         }
//         if(visited == true){
//             continue; //skip
//         }

//         // Count karo
//         int count =0;
//         for(int j=0;j<n;j++){
//             if(arr[i] ==arr[j]){
//                 count++;
//             }
//         }
//         cout<<arr[i]<<" -> "<<count <<endl;
//     }
//     return 0;
// }

// Optimal
int main(){
    int arr[]={1,2,2,2,3,1,4,2};
    int n=7;

    // unordered_map<int,int>freq;
    map<int,int> freq;

    // count frequency

    for(int i=0;i<n;i++){
        freq[arr[i]]++;

    }

    cout<<"Frequencies:\n";
    for(auto it :freq){
        cout<<it.first<<" -> "<<it.second << endl;
    }

    // find the max frequency element

    int maxFreq =0;
    int ans =-1;

    for(auto it : freq){
        if(it.second > maxFreq){
            maxFreq=it.second;
            ans =it.first;
        }
    }
    cout<<"\nMax Frequencey Element:\n";
    cout<<"Element:"<<ans<<endl;
    cout<<"Frequency:"<<maxFreq<<endl;

    return 0;
}