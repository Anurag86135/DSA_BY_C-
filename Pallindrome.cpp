#include<iostream>
using namespace std;

// pallindrom of String (Brute force approach)

// void Brutepallindrome(){

//     string str="MADAM";
//     string rev="";

//     for(int i=str.length()-1;i>=0;i--){
//         rev += str[i];
//     }

//    if(str == rev){
//     cout<<"Pallindrome";
//    }else{
//     cout<< "not a pallindrome";
//    }
// }


// Optimal approach 0(1)
void Optimal(){
string str="hello";

int l=0,r=str.length()-1;
bool ispallindrome=true;

while(l<r){
    // swap(str[l],str[r]);
    if(str[l]!=str[r]){
    ispallindrome=false;
    break;}
    l++;
    r--;

}

if (ispallindrome){
    cout<<"Pallindrome";
}else{
    cout<<"Not a pallindrome";
}
}


int main(){
    // Brutepallindrome();

    Optimal();
    return 0;

}