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
    int sum=0;
    for(int x: arr){
        sum=sum+x;
    }
    cout<<"sum is "<<sum<<endl;
}