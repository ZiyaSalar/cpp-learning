#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="asd; asldfj lkasjdflj lasjdfjwer";
    string :: iterator it;
    int v=0,s=0,c=0;
    for(it=str.begin();it!=str.end();it++){
        if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u'||*it=='A'||*it=='E'||*it=='I'||*it=='O'||*it=='U'){
            v++;
        }
        else if(*it==' '){
            s++;
        }
        else{
            c++;
        }
    }
    cout<<"vowel="<<v<<endl;
    cout<<"cousonent="<<c<<endl;
    cout<<"word="<<s+1<<endl;
    return 0;
}