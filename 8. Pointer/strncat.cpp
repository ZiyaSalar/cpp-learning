#include <iostream>
using namespace std;
int main(){
    char s1[10]="";
    int n=3;
    int flag=1;
    char s2[10]="asdfasdf";
    int i=0;
    while(s1[i]!=0){
        i++;
    }
    int j=0;
    while(s2[j]!=0){
        s1[i]=s2[j];
        i++;
        j++;
        if(flag==n){
            break;
        }
        flag++;
    }
    cout<<s1;
}