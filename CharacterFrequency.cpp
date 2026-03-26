#include<iostream>
#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

// int main(){

//     string str ="Anuraggi Mishra ji";
//     int freq[256]={0};//AscII Aray

//     // Count Frequency
//     for(char ch : str){
//     if(ch==' ')continue;
//     ch=tolower(ch);
//     freq[ch]++;
//     }
//     //Cout result
//     for(int i=0;i<256;i++){
//         if(freq[i]>0){
           
//                 cout<<char(i)<<" -> "<<freq[i]<<endl;
            
//         }
//     }
// return 0;
// }


// Optimal

int main(){
    string str;

    // Taking input from user

    cout<<"Enter a string: ";
    getline(cin, str);

    unordered_map<char,int>mp;

    // Count frequency

    for(char ch :str){
        if(ch==' ') continue;
        ch=tolower(ch);
        mp[ch]++;
    }

    // Print frequency

    cout<<"Character Frequencies:\n";
    for(auto &it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}
#include<string>
#include<unordered_map>

using namespace std;

// int main(){

//     string str ="Anuraggi Mishra ji";
//     int freq[256]={0};//AscII Aray

//     // Count Frequency
//     for(char ch : str){
//     if(ch==' ')continue;
//     ch=tolower(ch);
//     freq[ch]++;
//     }
//     //Cout result
//     for(int i=0;i<256;i++){
//         if(freq[i]>0){
           
//                 cout<<char(i)<<" -> "<<freq[i]<<endl;
            
//         }
//     }
// return 0;
// }


// Optimal

int main(){
    string str;

    // Taking input from user

    cout<<"Enter a string: ";
    getline(cin, str);

    unordered_map<char,int>mp;

    // Count frequency

    for(char ch :str){
        if(ch==' ') continue;
        ch=tolower(ch);
        mp[ch]++;
    }

    // Print frequency

    cout<<"Character Frequencies:\n";
    for(auto &it : mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}