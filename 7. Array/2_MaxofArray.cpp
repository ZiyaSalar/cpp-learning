#include <iostream>
using namespace std;

int main(){
    cout<<"Enter size of array: ";
    int size; cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element for index "<<i<<": ";
        cin>>arr[i];
    }
    int temp=0;
    for(int x: arr){
        if(temp<x){
            temp=x;
        }
        cout<<"Temp="<<temp<<endl;
    }
    cout<<"max no. is "<<temp<<endl;
}