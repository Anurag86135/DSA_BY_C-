#include<iostream>
using namespace std;
// Reverse String brute force
// void bruteForce(){
//     string str="Anurag";
//     string rev="";

//     for(int i=str.length()-1;i>=0;i--){
//         rev += str[i];
//     }
//     cout<<rev;
// }



// Optimal approach

void OptimalApproach(){
    string str ="Ragini";

    int i=0,j=str.length()-1;

    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
        

    }
    cout<<str;

}
int main(){
    // bruteForce();

    OptimalApproach();
    return 0;
}