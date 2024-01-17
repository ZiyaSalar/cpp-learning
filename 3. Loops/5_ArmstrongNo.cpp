#include <iostream>
#include <cmath> // to power 3 of number 
using namespace std;

int isarmstrong(int);

int main(){
    cout<<"Enter no. to check for Armstrong: ";
    int n; cin>>n;
    int aditi=isarmstrong(n);
    cout<<aditi<<endl;
    if(aditi==1){
        cout<<"no. is Armstrong"<<endl;
    }
    else{
        cout<<"no. is not Armstrong"<<endl;
    }
}

int isarmstrong(int n){
    int sum=0;
    int ziya=n;
    while(n>0){
        sum=sum+(pow(n%10,3));
        n/=10;
    }
    cout<<"sum= "<<sum<<endl;
    if(sum==ziya){
        return 1;
    }
    else{
        return 0;
    }
}
