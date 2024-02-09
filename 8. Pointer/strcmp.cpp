#include <iostream>
using namespace std;
int main(){
    char s1[10];
    char s2[20];
    cout<<"Enter stirng 1: ";
    cin.getline(s1,10);
    cout<<"Enter string 2: ";
    cin.getline(s2,10);
    int i=0;
    int flag;
    while(s1[i]!='\0' || s2[i]!='\0'){
        if(s1[i]>s2[i]){
            flag=1;
        }
        else if(s1[i]<s2[i]){
            flag=-1;
        }
        else{
            flag=0;
        }
    }
    cout<<flag;
}