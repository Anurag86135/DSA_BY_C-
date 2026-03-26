#include<iostream>
using namespace std;

// Brute force approach
// int main(){
//     string str ="Anuraganurag";
//     string result ="";

//     for(int i=0;i<str.length();i++){
//         bool found =false;

//         for(int j=0;j<result.length();j++){
//             if(str[i]==result[j]){
//                 found = true;
//                 break;
//             }
//         }

//         if(!found){
//             result +=str[i];
//         }
//     }
//     cout<<"String after removing duplicates: "<<result <<endl;
//     return 0;
// }


#include<unordered_set>
int main(){
string str =" aabbccde";
string result =" ";
unordered_set<char> seen;
for(char ch : str){
    if(seen.find(ch) ==seen.end()){
        result +=ch;
        seen.insert(ch);
    }
}
cout<<"String after removing duplicates: "<<result<<endl;
return 0;
}