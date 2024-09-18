#include<iostream>
using namespace std;
class Rectangle{
    private:

        int length;
        int width;
    
    public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;

    }
    friend int calculateArea(Rectangle rect);
};

    int calculateArea(Rectangle rect){
        return rect.length * rect.width;
    }

    int main(){
        Rectangle rect(5, 10);
        int area = calculateArea(rect);
        cout << "Area is: " << area << endl;
        return 0;
    }