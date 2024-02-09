#include <iostream>
using namespace std;

enum matrix{add=1,sub,mul};

int main(){
    cout<<"matrix Airthmetic"<<endl;
    int w, x, y, z; // initializing var to store no. of rows and colmns
    cout<<"Enter size of matrix A(ixj): "; cin>>w>>x;
    cout<<"Enter size of matrix B(ixj): "; cin>>y>>z;
    cout<<endl<<"choose the operation"<<endl;
    cout<<"1.Additon 2.Substraction 3. Multiplication"<<endl;
    int choose; cin>>choose;
    switch(choose){
        case add:
        {
            if(w!=y || x!=z){
                cout<<"addition can not be perfomed !!"<<endl;
                break;
            }
            else{
                int a[w][x];
                int b[y][z];
                int c[w][x];
                cout<<"Matrix Addition: A + B = C"<<endl;

                //matrix A:
                cout<<"Enter matrix A: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at A[%d][%d]: ",i,j);
                        cin>>a[i][j];
                    }
                }cout<<endl;

                //matrix B: 
                cout<<"Enter matrix B: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at B[%d][%d]: ",i,j);
                        cin>>b[i][j];
                    }
                }cout<<endl;

                //Addition of A and B: 
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        c[i][j]=a[i][j]+b[i][j];
                    }
                }cout<<endl;

                for (auto &i: c){
                    for(auto j: i){
                        cout<<j<<" ";
                    }cout<<endl;
                }
            }
        }break;

        case sub:
        {
            if(w!=y || x!=z){
                cout<<"Substraction can not be perfomed !!"<<endl;
                break;
            }
            else{
                int a[w][x];
                int b[y][z];
                int c[w][x];
                cout<<"Matrix Substraction: A - B = C"<<endl;

                //matrix A:
                cout<<"Enter matrix A: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at A[%d][%d]: ",i,j);
                        cin>>a[i][j];
                    }
                }cout<<endl;

                //matrix B: 
                cout<<"Enter matrix B: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at B[%d][%d]: ",i,j);
                        cin>>b[i][j];
                    }
                }cout<<endl;

                //Substraction of A and B: 
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        c[i][j]=a[i][j]-b[i][j];
                    }
                }cout<<endl;

                for (auto &i: c){
                    for(auto j: i){
                        cout<<j<<" ";
                    }cout<<endl;
                }
            }
        }break;

        case mul:
        {
            if(x!=y){
                cout<<"Multiplication can not be perfomed !!"<<endl;
                break;
            }
            else{
                int a[w][x];
                int b[y][z];
                int c[w][z]={{0}};
                cout<<"Matrix Multiplication: A x B = C"<<endl;

                //matrix A:
                cout<<"Enter matrix A: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at A[%d][%d]: ",i,j);
                        cin>>a[i][j];
                    }
                }cout<<endl;

                //matrix B: 
                cout<<"Enter matrix B: "<<endl;
                for(int i=0;i<w;i++){
                    for(int j=0;j<x;j++){
                        printf("Enter element at B[%d][%d]: ",i,j);
                        cin>>b[i][j];
                    }
                }cout<<endl;

                //Multiplication of A and B: 
                /*for(int i=0;i<w;i++){
                    for(int j=0;j<z;j++){
                        for(int k=0;k<x;k++){
                            c[i][j]=a[i][k]*b[k][j]+c[i][j];
                        }
                    }
                }*/

                for(int i=0;i<w;i++){
                    for (int j=0;j<z;j++){
                        int sum=0;
                        for (int k=0;k<x;k++){
                            sum=sum+a[i][k]*b[k][j];
                        }
                        c[i][j]=sum;
                    }
                }

                for (auto &i: c){
                    for(auto j: i){
                        cout<<j<<" ";
                    }cout<<endl;
                }
            }
        }
    }
    return 0;


}