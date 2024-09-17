#include<iostream>
using namespace std;
int main(){
    int r, c;
    cout<<"enter the value of row: ";
    cin>>r;
    cout<<"enter the value of column: ";
    cin>>c;
    int x[r][c];
    cout<<"enter the matrix";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout<<"elements of "<<i<<" row and "<<j<<" column : ";
            cin>>x[i][j];
        }
    }
    cout<<endl;

    for(int i = 0; i < r; i++){
        cout<<"{";
        for(int j = 0; j<c; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
    cout<<endl;


}