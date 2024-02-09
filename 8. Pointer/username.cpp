#include <iostream>
#include <cstring>
using namespace std;

/*
int main(){
    string str;
    cout<<"Enter your user name: ";
    getline(cin,str);
    char s[str.length()];
    str.copy(s,str.length());
    char *uname=strtok(s,"@");

    // char* uname=strtok(s,'@');
    cout<<uname<<endl;
    return 0;
}
*/

int main(){
    string str;
    cout<<"Enter your email ID: ";
    getline(cin,str);
    string s=str.substr(0,str.find('@'));
    cout<<s<<endl;
    return 0;
}