//check wheather the given email-id is valid or not
// valid condition: 
//1. include lower+uppercase letter in username
//2. spacial character only _ and . 
//3. no space in username

#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main(){
    string str;
    cout<<"Enter Your Email-id: ";
    getline(cin,str);
    char c_str[str.length()];
    str.copy(c_str,str.length());
    char* uname= strtok(c_str,"@");
    bool flag=true;
    for(int i=0;uname[i]!='\0';i++){
        if ((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)|| (str[i]==95)||(str[i]==46)||(str[i]>=48 && str[i]<=57)){
            // cout<<i<<uname<<endl;
            // int l=strlen(uname);
            // cout<<"length="<<l<<endl;
            continue;
        }
        else{
            cout<<"Username is not valid...!!!"<<endl;
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"Username is valid..."<<endl;
    }
    return 0;
}

