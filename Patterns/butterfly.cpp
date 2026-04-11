#include<iostream>
using namespace std;

int main(){
    int n=5;
    // Upper Part
    for(int i=0;i<n;i++){

        // Left stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // Spaces
         for(int j=0;j<2*(n - i -1);j++){
            cout<<" ";

        }
        // Right stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // Lower part
    for(int i=n-2;i>=0;i--){
        // Left stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        // spaces
        for(int j=0;j<2*(n -i-1);j++){
            cout<<" ";
        }
        // Right stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
        return 0;
}