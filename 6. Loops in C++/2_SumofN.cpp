#include<iostream>
using namespace std;

int main(){
    cout<<"Enter no.: ";
    int n; cin>>n;
    cout<<"Sum = ";
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    cout<<"rechacking: ";
    int rsum=(n*(n+1))/2;
    cout<<"Rechecked value: "<<rsum<<endl;
}