#include <iostream>
using namespace std;

int main(){
    cout<<"Enter size of array: ";
    int size; cin>>size;
    int arr[size];
    cout<<"Enter sorted element\n";
    for(int i=0;i<size;i++){
        cout<<"Enter element for index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Enter key: ";
    int key; cin>>key;
    int l=0; int h=size-1; int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==key){
            cout<<"Found at "<<mid<<endl;
            break;
        }
        else if(arr[mid]>key){
            h=--mid;
        }
        else if(arr[mid]<key){
            l=++mid;
        }
    }
    cout<<"l="<<l<<" h="<<h<<endl;
    cout<<"Unsuccessfull search"<<endl;;
    return 0;
}