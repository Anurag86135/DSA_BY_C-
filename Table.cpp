#include<iostream>
using namespace std;

void table(int n){
    for(int i=1;i<=10;i++){
        cout<< n <<" X "<<i<<" = "<< n*i<<endl;
    }
}

int main(){
    int n;
    
    cout<<"Enter the number that you want to print its table: "<<endl;
    cin>>n;

    table(n);
    return 0;
}