#include<iostream>
using namespace std;
int main(){
    cout<<"Enter no.: ";
    int n; cin>>n;
    cout<<"Table of "<<n<<endl;
    for(int i=1;i<=10;i++){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    cout<<"Table is Pritnted..."<<endl;
}
