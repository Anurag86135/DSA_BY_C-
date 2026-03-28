#include<iostream>
using namespace std;

int findLength(string str){
    int count =0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
        count++;
        }
    }
    return count;
}
int main(){

    string str;
    cout<<"Enter a string "<<endl;
    // cin>>str;
    getline(cin,str);
    cout<<"Length of the string is :"<<findLength(str);
    return 0;
}