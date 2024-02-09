#include <iostream>
using namespace std;

int linsearch(int[],int,int);
int binsearch(int[],int,int);

enum search{linear=1,binary};

int main(){
    cout<<"'Searching in an Array'"<<endl;
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

    cout<<"Menu:\n1.Linear Search[O(n)]: \n2.Binary Search[O(logn)]: 3"<<endl;
    cout<<"Enter choice: ";
    int ch; cin>>ch;
    switch(ch){

        case linear:
        {
            if(linsearch(arr,size,key)!=0){
                cout<<"Element found at "<<linsearch(arr,size,key)<<endl;
            }
            else{
                cout<<"Unsuccessfull search"<<endl;
            }
        }break;

        case binary:
        {
            if(binsearch(arr,size,key)!=0){
                cout<<"Element found at "<<binsearch(arr,size,key)<<endl;
            }
            else{
                cout<<"Unsuccessfull search"<<endl;
            }
        }break;
    }
}

int linsearch(int a[],int size,int key){
    // int i=-1;
    for (int i=0;i<size;i++){
        // i++;
        if(a[i]==key){
            return i;
        }
    }
    return 0;
}

int binsearch(int a[],int size,int key){
    int l=0; int h=size-1; int mid=0;
    while(l<h){
        mid=(l+h)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            h=--mid;
        }
        else{
            l=++mid;
        }
    }
    return 0;
}