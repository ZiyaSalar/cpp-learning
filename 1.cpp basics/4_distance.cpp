#include <iostream>
#include <cmath>
using namespace std;
int dist(int x1, int x2, int y1, int y2){
    int d;
    d=sqrt(pow((x2-x1),2)+((y2-y1),2));
    return d;
}

int main(){
    int x1,y1,x2,y2;
    cout<<"Enter X co-ordinate: ";
    cin>>x1>>x2;
    cout<<"Enter Y co-ordinate: ";
    cin>>y1>>y2;
    cout<<"distance is "<<dist(x1,x2,y1,y2)<<" unit"<<endl;

}