#include <iostream>
using namespace std;

int reverse(int);

int main(){
    cout<<"Enter no. to reverse: ";
    int n; cin>>n;
    cout<<"reverse no.: "<<reverse(n)<<endl;

}

int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}