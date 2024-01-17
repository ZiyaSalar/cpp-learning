#include <iostream>
using namespace std;

enum matrix{add=1,sub,mul};

int main(){
    cout<<"\"Matrix Airthmetic\": "<<endl;
    cout<<"Enter Size of A: "<<endl;
    cout<<"m=";int m; cin>>m;
    cout<<"n=";int n; cin>>n;
    cout<<endl;
    cout<<"Enter Size of B: "<<endl;
    cout<<"x=";int x; cin>>x;
    cout<<"y=";int y; cin>>y;
    cout<<endl;
    int a[m][n];
    int b[x][y];

    cout<<"Enter element of A: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"enter element at ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>a[i][j];
        }
    }

    cout<<"Enter element of b: "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<"enter element at ["<<i<<"]"<<"["<<j<<"]: ";
            cin>>b[i][j];
        }
    }
    
    while(1){
        cout<<"What you want to perform ?"<<endl;
        cout<<"1.Addition\n2.Substraction\n3.multiplication: ";
        int ch; 
        cin>>ch;
        switch(ch){
            case add:
            {
                if(m!=x && n!=y){
                    cout<<"matrices are not equal.."<<endl;
                    cout<<"addition can not be perform on it..."<<endl;
                }
                else{
                    int c[m][n];
                    // addition of matrix: 
                    for(int i=0;i<m;i++){
                        for(int j=0;j<n;j++){
                            c[i][j]=a[i][j]+b[i][j];
                        }
                    }
                    //printing the matrix:
                    for(auto &x:c){
                        for(auto y:x){
                            if(y<0){
                                cout<<y<<"\t";
                            }
                            else{
                                cout<<" "<<y<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
            }break;

            case sub:
            {
                if(m!=x && n!=y){
                    cout<<"matrices are not equal.."<<endl;
                    cout<<"Substraction can not be perform on it..."<<endl;
                }
                else{
                    int c[m][n];
                    // addition of matrix: 
                    for(int i=0;i<m;i++){
                        for(int j=0;j<n;j++){
                            c[i][j]=a[i][j]-b[i][j];
                        }
                    }
                    //printing the matrix:
                    for(auto &x:c){
                        for(auto y:x){
                            if(y<0){
                                cout<<y<<"\t";
                            }
                            else{
                                cout<<" "<<y<<"\t";
                            }
                        }
                        cout<<endl;
                    }
                }
            }break;

            case mul: {
    if (n == x) {
        int c[m][y] = {0}; // Initialize result matrix to zeros
        // multiplication of matrices
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < y; j++) {
                for (int k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        // printing of matrices
        for (auto &x : c) {
            for (auto y : x) {
                if (y < 0) {
                    cout << y << "\t";
                } else {
                    cout << " " << y << "\t";
                }
            }
            cout << endl;
        }
    } else {
        cout << "matrix multiplication can not be performed..." << endl;
    }
} break;

        }

        cout<<"do you want to continue(y/n): ";
        char choice; cin>>choice;
        if(choice=='y' || choice=='Y'){
            continue;
        }
        else{
            break;
        }
        
    }
}
