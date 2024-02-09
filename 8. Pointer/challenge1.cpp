// count no. of words in a string having multiple spaces
//count no. of consonant in a string having character other than vowel space and consonatnt

#include <iostream>
#include <string>
using namespace std;

int main(){
    int count=0;
    string str;
    cout<<"Enter String: ";
    getline(cin,str);
    bool flag=false;
    for(char c : str){
        if(isspace(c)){
            flag=false;
        }
        else if(!flag){
            flag=true;
            count++;
        }   
    }
    cout<<"words: "<<count<<endl;
    return 0;
}
