#include<iostream>
using namespace std;
class Rectangle{
    int length, width;
    public:
    Rectangle(int x, int y):length(x), width(y){}
friend int calArea(Rectangle &obj);
};

int calArea(Rectangle &obj)
{
    return obj.length * obj.width;
}

int main()
{
    Rectangle R1(10, 20);
    cout<<calArea(R1);
    return 0;
}
