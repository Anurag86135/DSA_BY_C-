#include<iostream>
#include<sstream>
using namespace std;

// brute force apprach
string longestWord(string sentence){
    stringstream ss(sentence);
    string word,longest="";

    while(ss >> word){
        if(word.length() > longest.length()){
            longest =word;
        }
    }
    return longest;
}

int main(){
    string sentence;
    cout<<" Enter the string  : "<<endl;
    getline(cin,sentence);

    cout<<"The longest word in the string :"<<longestWord(sentence);
    return 0;




}