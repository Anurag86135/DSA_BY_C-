#include<iostream>
#include<cctype>
using namespace std;

// Optimal solution
// int main(){
//     string str ="hell@$0! 123**";

//     string result ="";

//     for(char ch :str){
//         if(isalnum(ch)){
//             result +=ch;
//         }
//     }
//     cout<<result;
//     return 0;
// }

// Brute Force

int main(){
    string str ="b$o@y";

    string result ="";

    for(char ch:str){
        if(isalnum(ch)|| ch == ' '){
            result+=ch;
        }
    }
    cout<<result;
    return 0;
}

