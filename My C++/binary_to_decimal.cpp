#include<iostream>
using namespace std;
int main(){

    // To convert a binary number (given as input) to its decimal equivalent
    
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    int ans=0;
    int power=1;
    while(n>0){
        int last_digit=n%10;
        ans=ans+last_digit*power;
        power=power*2;
        n=n/10;
    }
    
    cout<<"Decimal equivalent: "<<ans<<endl;
    return 0;
}