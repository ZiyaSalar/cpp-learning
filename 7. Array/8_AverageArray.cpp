#include <iostream>
using namespace std;

int main(){
    int a[7]={1,1,2,3,4,5,6};
    float avg;
    int sum=0;
    for(int x:a){
        sum=sum+x;
    }
    avg=(float)sum/6;
    cout<<"Avg is "<<avg<<endl;
    return 0;
}