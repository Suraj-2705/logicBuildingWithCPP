#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    public:
    int top;
    int arr[MAX];
    Stack(){
        top = -1;
    }
    public:
    void pushInStack(int val){
        top++;
        arr[top]=val;
    }
    int popStack(){
        int result = arr[top];
        top--;
        return result;
    }
    void printStack(){
        cout<<"Stack Elements: "<<endl;
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
        // cout << "\nMenu:\n";                         
        // cout << "1. Push\n";
        // cout << "2. Pop\n";
        Stack s;
        s.pushInStack(10);
        s.pushInStack(20);
        s.pushInStack(30);
        s.pushInStack(40);
        s.pushInStack(50);
        s.popStack();
        s.printStack();


 return 0;
}