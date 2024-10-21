#include<iostream>
using namespace std;
int main(){
    int a[] = {1,1,1,1,1,2,2,2,2,2,2,3,3,3,3,3,4,4,44,4,4,55,5,5,5,5,5,8,8,8,8,9,9,9,10,10,10};
    int i = 0;
    for(int j = 1; i<sizeof(a)/sizeof(a[0]); j++){
        if(a[j]!= a[i]){
            a[i+1] = a[j];
            i++;
          
        }
      i = i +1;
      cout<<"number of elements = "<<i<<endl;

      for(int j = 0; j<i; j++)
      {
        cout<<a[j]<<" ";
      }
    
    }
    return 0;
}