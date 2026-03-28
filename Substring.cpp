// Find substring in string.
#include<iostream>
using namespace std;

// Optimal aaproach

// int main(){
//     string str ="Hello World";
//     string sub ="World";

//     if(str.find(sub)!= string::npose){
//         cout<<"Substring found: ";

//     }else{
//         cout<<"Substring not found ";
//     }
//     return 0;
// }

// Optimal approach

bool isSubstrings(string str,string sub){
    int n=str.length();
    int m=sub.length();

    for(int i=0;i<=n-m;i++){
        int j;

        for(j=0;j<m;j++){
            if(str[i+j]!=sub[j]){
                break;
            }
        }
        if(j == m){
            return true;
        }
    }
    return false;
}
int main(){
    string str,sub;

    cout<<"Enter main strings: ";
    getline(cin,str);

    cout<<"Enter substring: ";
    getline(cin,sub);

    if(isSubstrings(str,sub)){
        cout<<"Substing Found";

    }else{
        cout<<" Substring Not Found";
    }
    return 0;
}