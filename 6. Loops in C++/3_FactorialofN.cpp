#include <iostream>
using namespace std;

int main(){
    cout<<"Enter no.: ";
    int n; cin>>n;
    int fact=1;
    if(n==0){
        cout<<"factorial of "<<n<<" is "<<1<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
            fact*=i;
        }
    cout<<"factorial of "<<n<<" is "<<fact<<endl;
    }
}