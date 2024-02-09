#include <iostream>
using namespace std;

int gcd(int,int);

int main(){
    cout<<"Enter first no.: ";
    int a; cin>>a;
    cout<<"Enter second no.: ";
    int b; cin>>b;
    cout<<"GCD is "<<gcd(a,b)<<endl;
    return 0;
}

int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
