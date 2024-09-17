// Program to merge two sorted arrays
#include <iostream>
using namespace std;

int main() {
    //Initialize the two input arrays
    int a[]={2,3,5,12,56,58,65,98,101,102,110};
    int b[]={-1,3,4,11,13,18,100};
    //Find the number of elements in each array
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    
    //Declare the output array with size n1+n2
    int n=n1+n2;
    int c[n];
    
    //Declare the iterators used for each array
    int i=0, j=0, k;
    
    //Loop to put the smaller element from the input
    //arrays to the output array, while keeping
    //track of elements from each array
    //Here i is keeping track of first array
    //j is keeping track of second array
    //k is keeping track of output array
    for(k=0;k<n;k++)
    {
        if(i==n1 || j==n2)
            break;
        if(a[i]<b[j])
        {
            c[k]=a[i++];
        }
        else
        {
            c[k]=b[j++];
        }
    }
    
    //When we come out of the loop, it is either
    //due to exhaust of first array or
    //due to exhaust of second array
    
    //If we have reached end of first array and
    //have some elements left in the second array,
    //store all the remaining elements of second
    //array in the output array.
    if(i==n1)
    {
        for(;j<n2;j++)
        {
            c[k++]=b[j];
        }
    }
    //If we have reached end of second array and
    //have some elements left in the first array,
    //store all the remaining elements of first
    //array in the output array.
    else
    {
        for(;i<n1;i++)
        {
            c[k++]=a[i];
        }
    }
    
    //Display all elements of the output array
    for(k=0;k<n;k++)
    {
        cout<<c[k]<<" ";
    }
    //Return 0 to the Operating System
    return 0;
}//End of the main method