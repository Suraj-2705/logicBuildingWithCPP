#include<iostream>
using namespace std;
int main(){
int x[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(x)/sizeof(x[0]);
int i;
for(i=n; i>0; i--){
    x[i] = x[i-1];

}
x[0] = 56;
int n2 = n+1;

for(i=0; i<n2; i++){
    cout<<x[i]<<" ";
}


}