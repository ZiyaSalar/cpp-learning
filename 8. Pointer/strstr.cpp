#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char s1[10]="Sayyad";
    char s2[10]="ayy";
    int i=0;
    int j=0;
    while(s1!='\0'){
        while(s2[j]!=0){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
        }
        i++;
    }
}