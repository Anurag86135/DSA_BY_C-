#include<iostream>
using namespace std;

string Concate(string str1,string str2){

    return str1+str2;
}

int main(){
    string str1;
    string str2;
    cout<<"Enter the first string : "<<endl;
    getline(cin,str1);

    cout<<"Enter the Second String : "<<endl;
    getline(cin,str2);

    cout<<Concate(str1,str2);

    return 0;
}