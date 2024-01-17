#include <iostream>
using namespace std; 

void revShantanoo(int[],int);
void revZiya(int[],int);

int main(){
    // cout<<"'Searching in an Array'"<<endl;
    // cout<<"Enter size of array: ";
    // int size; cin>>size;
    // int arr[size];
    // cout<<"Enter sorted element\n";
    // for(int i=0;i<size;i++){
    //     cout<<"Enter element for index "<<i<<": ";
    //     cin>>arr[i];
    // }

    int size=7;
    int arr[size]={1,2,3,4,5,6,7};
    // revShantanoo(arr,size);
    cout<<endl;
    revZiya(arr,size);
    cout<<endl;
}

void revShantanoo(int a[],int size){
    int rev[size];
    for(int i=0; i<size;i++){
        rev[size-i]=a[i];
    }
    for(int i=0;i<size;i++){
        cout<<rev[i]<<" ";
    }
    cout<<endl;
}

void revZiya(int a[],int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=a[i];
        a[i]=a[size-(1+i)];
        a[size-(1+i)]=temp;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}