#include<iostream>
using namespace std;
int main(){
    int r, c,a,b;


    cout<<"enter the number of rows: ";
    cin>>r;
    cout<<"enter the number of columns: ";
    cin>>c;
    int x[r][c];
    a=c,b=r;
    int y[a][b];

    cout<<"enter the elements of the matrix "<<endl;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            cout<<"enter the value of "<<i<<" row"<<"and"<<j<<" column : ";
            cin>>x[i][j];
        }
    }
    cout<<endl;

    cout<<"the entered matrix is "<<endl;
    for(int i = 0; i<r; i++){
        cout<<"{";
        for(int j = 0; j<c; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }


    cout<<"the transpose of the matrix is "<<endl;
    for(int i = 0; i<a; i++){
        cout<<"{";
        for(int j = 0; j<b; j++){
            y[i][j] = x[j][i];
            cout<<y[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }

return 0;

}