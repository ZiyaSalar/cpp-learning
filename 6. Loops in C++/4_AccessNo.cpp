#include <iostream>
using namespace std;

int main(){
    cout<<"Enter no.: ";
    int n; cin>>n;
    int i=1;
    while(n>0){
        cout<<i<<": "<<n%10<<endl;
        i+=1;
        n/=10;
    }
    cout<<endl;
    return 0;
}