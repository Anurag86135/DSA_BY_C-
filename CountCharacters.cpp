#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter the String :"<<endl;
    getline(cin,str);
    int count=0; 
cout<<"Your string is :"<<str;
cout<<endl;

    for(int i=0;i<str.length();i++){
        if(str [i]!=' '){
        count++;
        
        }
    }
    cout<<"Number of Characters in the given string is :"<< count <<endl;
    return 0;
    

    
}