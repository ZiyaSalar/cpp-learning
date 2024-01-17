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
    cout<<"Enter key: ";
    int key; cin>>key;
    int i=-1;
    for(int x : arr){
        i++;
        if(x==key){
            cout<<"found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"unsuccessfull search"<<endl;
    return 0;
}