#include<iostream>
using namespace std;

// int main(){
//     string str ="aabbccde";

//     for(int i=0;i<str.length();i++){
//         int count =0;
//         for(int j=0;j<str.length();j++){
//             if(str[i] == str[j]){
//                 count++;
//             }
//         }

//             if(count ==1){
//                 cout<<"First non-repeating character: "<<str[i];
//                 return 0;
//             }
//         }
        
//         cout<<endl;
//         cout<<" No non-repeating character found ";
//         return 0;
    
// }

// Optimal apprach 
#include<unordered_map>

int main(){
    string str ="aabbcdde";
    unordered_map<char,int>freq;
    // Step 1:Count frequency of each character
    for(char ch :str){
        freq[ch]++;
    }
    // step:Find first character with frequency 1
    for(char ch :str){
        if(freq[ch] ==1){
            cout<<"First non-repeating character :"<<ch;
            return 0;
        }
    }
    cout<<"No non-repeating character found";
    return 0;
}

