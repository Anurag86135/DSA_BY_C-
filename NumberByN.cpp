#include<iostream>
using namespace std;
// brute force approach 
// void PrintN(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         cout<<i<<' ';
//     }

// }
// Optimal approach

void PrintN(int n){
    if(n==10) return ;

    PrintN(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    // PrintN();
    PrintN(n);

    return 0;
}

