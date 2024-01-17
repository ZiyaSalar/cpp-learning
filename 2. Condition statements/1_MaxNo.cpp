#include <iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter first no.: ";
    cin>>a;
    cout<<"Enter second no.: ";
    cin>>b;
    if(a>b)
        cout<<"a is greater then b"<<endl;
    // elif(a=b)
        // cout<<"a is equal to b";
    else
        cout<<"a is less than b"<<endl;
    return 0;
}