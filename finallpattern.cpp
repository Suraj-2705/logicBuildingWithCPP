#include<iostream>
using namespace std;
int main(){
    int n;
    int i = 1;
    cin >> n;
    int value = i;
    while(i <= n){
        int space = n - i;
        while(space){
            cout << " ";
            space = space - 1;
            }

            int j = 1;
            while(j <= i){
                cout << value;
                value = value + 1;
                j = j + 1;
    }
    
    int start = i - 1;
    while(start){
        cout << start;
        start = start - 1;
    }

    cout << endl;
    i = i + 1; 
}

}