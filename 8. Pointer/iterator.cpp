#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="abcdefghijklmnopqrstuvwxyz";
    string :: iterator it=str.begin(); // a
    
    for(it;it!=str.end();it++){
        *it-=32;
    }
    cout<<str;
    return 0;
}