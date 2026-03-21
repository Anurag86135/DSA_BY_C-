// Product of digits

#include<iostream>
using namespace std;

int ProductOfD(int n){
    int product =1;

    for(int i=0;i<n;i++){

        int digit = n % 10;
        product = product *digit;
        n=n/10;

    }
    return product;
}
int main(){
    int n;

    cout<<" Enter number :"<<endl;
    cin>>n;

    cout<<"Product of digits of "<<n<<" is "<<ProductOfD(n);
    return 0;


}