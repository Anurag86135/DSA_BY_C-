#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// check a number is pallindrome or not
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;

    string str =to_string(n); //convert number to string 
    string revStr =str;
    reverse(revStr.begin(),revStr.end()); //Now it will work
  
    cout<<"Reversed Number : "<< revStr<<endl;

    if(str ==revStr){
        cout<<n <<" is a palindrome"<< endl;
    }
    else{
        cout<< n <<" is not a palindrome"<<endl;
    }
    return 0 ;
}

// int main(){
//     // Optimal approach
//     int n;
//     cout<<"Enter the number : "<<endl;
//     cin>>n;

//     int original =n;
    
    
//     int reverseNumber=0;

//     while(n>0){
//         int digit =n%10;
//         reverseNumber = reverseNumber*10+digit;

//         n=n/10;


//     }
//     cout<<reverseNumber<<endl;

//     if(original==reverseNumber){
//         cout<< original <<" is Pallindrome"<<endl;
    
//     }
//     else{
//         cout<<original <<" is not pallindrome"<<endl;
//     }
//     return 0;
// }

// // Brute force approach
