#include<iostream>
#include<cctype> //for toupper
using namespace std;
// Brute force approach
// string toUpperBrute(string str){
//     string result ="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]>='a' && str[i]<='z'){
//         // Converting  lowercase to uppercase using ASCAII difference
//         result +=str[i] -('a'-'A');
//     }else{
//         result += str[i];
//         // Keep other characters unchanged
//     }
// }
//     return result;
// }


// Optimal apprach
string toUpperOptimal(string str){
    for(int i=0;i<str.length();i++){
        str[i]=toupper(str[i]);//Convert directly
    }
    return str;

}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);

    cout<<"Uppercase (Brute):"<<toUpperOptimal(str)<<endl;
    return 0;

}