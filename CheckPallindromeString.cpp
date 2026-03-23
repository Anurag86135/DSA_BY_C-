#include<iostream>
using namespace std;

bool Pallindrome(const string &str){
    
    int i=0;
    int j=str.length()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
       
    }
    return true;
}
int main(){
    string str="madam";
    if(Pallindrome(str)){
        cout<<"Pallindrome string"<<endl;
    }else{
        cout<<"Not a pallindrome string";
    }
    return 0;
}