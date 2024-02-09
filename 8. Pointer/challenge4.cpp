#include <iostream>
#include <string>
using namespace std;

int main(){
    int count=0;
    string str;
    cout<<"Enter a String: ";
    getline(cin,str);
    string :: iterator it;
    for(it=str.begin();it!=str.end();it++){
        if(isalpha(*it)){
            if(*it!='a'&&*it!='e'&&*it!='i'&&*it!='o'&&*it!='u'&&*it!='A'&&*it!='E'&&*it!='I'&&*it!='O'&&*it!='U')
            count++;
        }
    }
    cout<<"no. of consonant: "<<count<<endl;
    return 0;
}