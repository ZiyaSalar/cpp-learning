// Area of circle by taking radius as input;

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float r,a;
    cout<<"Enter radius: ";
    cin>>r;
    a=3.14*(pow(r,2));
    cout<<"Area of Circele is "<<a<<" sq. unit\n";
    return 0;
}