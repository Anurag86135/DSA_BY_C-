#include<iostream>
using namespace std;

string Remove_space(string str){
    string result ="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            result += str[i];
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter the String :"<<endl;
    getline(cin,str);

    cout<<"The Resulytant string is :"<<Remove_space(str);
    return 0;
}