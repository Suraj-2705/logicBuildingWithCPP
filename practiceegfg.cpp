#include<iostream>
using namespace std;
int main(){
    int x[] = {2, 2, 3, 4, 5, 6};
    int n = sizeof(x)/sizeof(x[0]);

    for(int j = 0; j < n-1; j++){
        cout << " pass "<< (j+1) << " started " << endl;
        int flag = 0;
        for(int i = 0; i < n-1; i++){
            if(x[i]>x[i+1]){
                int temp = x[i];
                x[i] = x[i+1];
                x[i+1] = temp;
                flag = 1;
            }
    }
    if(flag == 0){
        break;
    }


    
}

}