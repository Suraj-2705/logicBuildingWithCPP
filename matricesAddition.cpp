#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"enter the value of row and column"<<endl;
    cin >> m >> n;

    int x[m][n], y[m][n], z[m][n];

    //matrix A
    cout<<"enter the element of first matrix"<<endl;
    for (int i = 0; i < m; i++){
        
        for (int j = 0; j < n; j++){
            cout<<"enter element "<<i<<" row and " << j << " column : ";
            cin >> x[i][j];
    }
    }
    //matrix b
    cout<<"enter the element of second matrix"<<endl;
    
      for (int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            cout<<"enter element "<<i<<" row and " << j << " column : ";
            cin >> y[i][j];
            z[i][j]=x[i][j] + y[i][j];
    }
    }

    for(int i = 0; i<m; i++){
        cout<<"{";
        for(int j = 0; j < n; j++){
            cout<<z[i][j]<<" ";
        }
        cout<<"}"<<endl;
    }
}