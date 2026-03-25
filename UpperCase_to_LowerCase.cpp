#include<iostream>
#include<cctype>
using namespace std;

// Brute force approach 

// int main(){
//     string str="Anurag Mishra AALU Challu";

//     for(int i=0;i<str.length();i++){
//         if(str[i]>='A' && str[i]<='Z'){
//             str[i]=str[i]+32;
//         }
//     }

//         cout<<"LoweCase string :"<<str;
//         return 0;
    
// }

// brute force approach
string  ApproachSmall(string str){
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
    }
    return str;

}
int main(){
    string str;
    cout<<"Enter the String :"<<endl;
    getline(cin,str);

    cout<<"Lower form :"<<ApproachSmall( str)<<endl;
    return 0;
}