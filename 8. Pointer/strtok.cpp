#include <iostream>
#include <cstring>
using namespace std;
int main (){
    char s[]="x=10;y=20;z=30;";
    char* token=strtok(s,";");
    while(token!=nullptr){
        cout<<token<<endl;
        token=strtok(NULL,";");
    }
    
    return 0;
}