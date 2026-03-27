#include<iostream>
using namespace std;

// Optimal approach
// int main(){

//     string str1="hello";
//     string str2="hell";

//     if(str1==str2){
//         cout<<"Strings are equal";

//     }else{
//         cout<<"Strings are not equal";
//     }
//     return 0;
// }

// Brute force approach

bool areEqual(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1="hello";
    string str2="helloji";
    if(areEqual(str1,str2)){
        cout<<"Strings are equal";
    }else{
        cout<<"Strings are not equal";
    }
    return 0;
}
