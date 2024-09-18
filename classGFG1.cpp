#include<iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int width;

    Rectangle(int l, int w)
    {
        length = l;
        width = w;

    }
    friend int CalculateArea(Rectangle rect);
};

    int calculateArea(Rectangle rect){
        return rect.length * rect.width;
    }

    int main(){
        Rectangle rect(5, 10);
        int area = calculateArea(rect);
        cout << "Area is: " << area << endl;
    }