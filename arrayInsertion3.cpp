#include<iostream>
using namespace std;
int main(){
int x[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(x)/sizeof(x[0]);
int i;
int k = 2;
for(i=n; i>k; i--){
    x[i] = x[i-1];

}
x[k] = 56;
int n2 = n+1;

for(i=0; i<n2; i++){
    cout<<x[i]<<" ";
}


}