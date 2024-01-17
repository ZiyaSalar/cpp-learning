#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,d,r1,r2;
    cout<<"Enter Value of a,b,c: ";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0){
        // roots are real and equal
        r1=-(b/(2*a));
        cout<<"Roots are Real and Equal"<<endl;
        cout<<"r="<<r1<<endl;
    }
    else if(d>0){
        // roots are real and unequal
        cout<<"d="<<d<<endl;
        r1=((-b+sqrt(d))/(2*a));
        r2=((-b-sqrt(d))/(2*a));
        cout<<"Roots are Real and Unequal"<<endl;
        cout<<"r1="<<r1<<"\nr2="<<r2<<endl;
    }
    else{
        cout<<"roots are imaginary";
    }
}