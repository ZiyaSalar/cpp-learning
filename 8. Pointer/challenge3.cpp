// check pallindrome of string having mixed of uppercase and lower case: MadAm-->should be true

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++){
        if(*it>='A'&& *it<='Z'){
            *it=*it+32;
        }
    }
    string :: iterator i;
    string :: reverse_iterator j;
    bool flag=true;
    for(i=str.begin(),j=str.rbegin();i!=str.end();i++,j++){
        if(*i!=*j){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"pallindrome...!!!"<<endl;
    }
    else{
        cout<<"not a pallindrome..!!!"<<endl;
    }
    return 0;
        
}