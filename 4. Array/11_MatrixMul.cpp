#include <iostream>
using namespace std;

int main(){
    int a[2][3]={{1,2,3},{3,4,5}};
    int b[3][2]={{3,4},{2,1},{1,2}};
    // matrix substraction;
    int c[3][3]={0};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                c[i][j]=a[i][k]*b[k][j]+c[i][j];
            }
        }
    }
    for(auto &x:c){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}