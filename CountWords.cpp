#include<iostream>
#include<sstream>
using namespace std;
// Brute force apprach
// int countWords(string sentence){
//     int count =0;
//     for(int i=0;i<sentence.length();i++){
//         if(sentence[i]!=' '&&((i == 0)|| sentence[i-1]==' ')){
//             count++;
//         }
//     }
//     return count;
// }

// Optimal approach
int countWords(string sentence){
    stringstream ss(sentence);
    string word;
    int count=0;

    while(ss >> word){
        count++;
    }
    return count;
}

int main(){
    string sentence;
    cout<<"Enter the sentence : "<<endl;
    getline(cin,sentence);

    cout<<"Number of words in the sentence is :"<<countWords(sentence);
    return 0;
}