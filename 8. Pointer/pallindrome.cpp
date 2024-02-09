#include <iostream>
#include <string>
using namespace std;

/*
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    bool flag =true;
    for(int i=0,j=str.length()-1;str[i]!=0;i++,j--){
        // cout<<j<<endl;
        // cout<<"str[i]="<<str[i]<<" str[j]="<<str[j]<<endl;
        if(str[i]!=str[j]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not a pallindrome"<<endl;
    }
    return 0;
}
*/

int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    string::iterator lit=str.begin();
    string::reverse_iterator rit=str.rbegin();
    bool flag=true;
    for(lit;lit!=str.end();lit++,rit++){
        if(*lit!=*rit){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"palllindrome"<<endl;
    }
    else{
        cout<<"not a pallindrome"<<endl;
    }
    return 0;
}