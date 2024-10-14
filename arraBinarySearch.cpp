#include<iostream>
using namespace std;
int main(){
    int x[10];
    int i;
    int beg=0, end=9, mid;
 
    for(i=0; i<10; i++){
           cout<<"enter the array"<<endl;
        cin>>x[i];
    }
    
    int num;
    cout<<"enter the number to find"<<endl;
    cin>>num;
    
    while(beg<=end){
        
        mid=(beg+end)/2;
        if(x[mid]==num){
            cout<<"number found at position "<<mid+1<<endl;
            break;
        }

        else if(x[mid]>num){
            end=mid-1;
        }else{
            beg=mid+1;
        }
    }
    if(beg>end){
        cout<<"number not found";
    }
}