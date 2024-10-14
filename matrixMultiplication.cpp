#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"enter the number of rows in matrix 1: ";
    cin>>m;
    cout<<"enter the number of rows in matrix 1: ";
    cin>>n;
    int p, o;
    cout<<"enter the number of rows in matrix 2: ";
    cin>>p;
    cout<<"enter the number of rows in matrix 2: ";
    cin>>o;

    if(n!=p){
        cout<<"matrix cant be multiplied";
        return 0;
    }
    int x[m][n], y[n][o], result[m][o];
    for(int i = 0; i<m; i++){
            for(int j = 0; j<o; j++){
                result[i][j] = 0;
        }



    cout<<"enter the elements of matrix 1: ";

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>x[i][j];
    }
    }

        cout<<"enter the elements of matrix 1: ";
        for(int i = 0; i<n; i++){
            for(int j = 0; j<o; j++){
                cin>>y[i][j];
            }
        }


    
    

        //now for multiplication

        for(int i = 0; i<m; i++){
            for(int j = 0; j<o; j++){
                for(int k = 0; k<n; k++){
                    result[i][j] = x[i][k] * y[k][j];
                }
            }   
        }
        cout<<"the result of matrix multiplication is: "<<endl;
        for(int i = 0; i<m; i++){
            cout<<"{";
            for(int j = 0; j<o; j++){
                cout<<result[i][j]<<" ";
            }
            cout<<"}"<<endl;
        }

}
return 0;
}