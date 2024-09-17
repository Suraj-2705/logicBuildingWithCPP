#include<iostream>
using namespace std;
int main(){
   
    int arr[10];
    cout<<"enter the number"<<endl;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
 int max = arr[0];
for(int i=1; i<10; i++){
    if(max>arr[i]){
        max=arr[i];
    }

}
    cout<<"min number is : "<<max;
}    