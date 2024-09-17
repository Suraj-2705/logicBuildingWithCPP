// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    //Initialize the arrays
   int x[]={2,5,3,7,9,20};
   int y[]={3,8,2,9,34,1,45};
   
   //Find the number of elements in each array
   int n1=sizeof(x)/sizeof(x[0]);
   int n2=sizeof(y)/sizeof(y[0]);
   
   //Declare the output array
   int n=n1+n2;
   int z[n];
   
   //Declare the iterators
   int i,k=0;
   
   //Loop to store the elements of first array
   for(i=0;i<n1;i++)
   {
       z[k++]=x[i];
   }
   
   //Loop to store the elements of second array
   for(i=0;i<n2;i++)
   {
       z[k++]=y[i];
   }
   
   //Loop to display the final array
    for(i=0;i<n;i++)
    {
        cout<<z[i]<<"  ";
    }
    
    //Return 0 to Operating system
    return 0;
}//main ends