#include<iostream>
#include<algorithm>
using namespace std;

// brute force approach
// int main(){
//     string str1="aloo";
//     string str2="olaow";

//     if(str1.length()!=str2.length()){
//         cout<<"Not anagrams" <<endl;
//         return 0;
//     }

//     // Sort both strings
//     sort(str1.begin(),str1.end());
//     sort(str2.begin(),str2.end());

//     if(str1 == str2){
//         cout<<"Anagrams"<<endl;
        
//     }else{
//         cout<<"Not anagrams"<<endl;
//     }
//     return 0;
// }

// Optimala approach 

bool areAnagrams(string str1, string str2){
    if(str1.length()!= str2.length()){
        return false;
    }

        int freq[256]={0};// ASCAII frequency array

        //count for str1
        for(int i=0;i<str1.length();i++){
            freq[str1[i]]++;


        }
        // subtract count for str2
        for(int i=0;i<str2.length();i++){
        freq[str2[i]]--;
    }
    // Check all frequencies
    for(int i=0;i<256;i++){
        if(freq[i] !=0){
            return false;
        }
    }
    return true;
    
}
int main(){
    string str1="love";
    string str2="silent";

    if(areAnagrams(str1,str2))
    cout<<"Anagrams"<<endl;
    else
    cout<<"Not anagrams"<<endl;
    return 0;
}