#include<iostream>
using namespace std;

// Brute force approach

// int main(){
//     string str;
//     cout<<"Enter a atring :";
//     getline(cin, str);
//     int vowels =0,consonants=0;

//     for(int i=0;i<str.length();i++){
//         char ch =tolower(str[i]);

//         if(ch>='a' && ch<='z'){
//             if(ch =='a' || ch =='e'|| ch=='o' || ch == 'u'){
//                 vowels++;

//             }else{
//             consonants++;
//             }
//         }
//     }
//     cout<<"Vowels: "<<vowels <<endl;
//     cout<<"Consonants: "<<consonants <<endl;
//     return 0;

// }

// Optimal apprach(Using function)

void countVowelsConsonants(string str){
    int vowels =0,consonants=0;

    for(int i=0;i<str.length();i++){
        char ch =tolower(str[i]);

        if(ch >='a' && ch <='z'){
            if(ch =='a' || ch == 'e' || ch =='i' || ch=='o' || ch == 'u'){
                vowels++;
            }else{
                consonants++;
            }
        }
    }
    cout<<"Vowels :"<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
}

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);

    countVowelsConsonants(str);

    return 0;
}
