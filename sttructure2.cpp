// Example program
#include <iostream>
using namespace std;
struct Point
{
int X;
int Y;

}P1, P2, P3;

int main() {

P1 = {2, 5};
P2 = {4, 8};
P3.X = P1.X + P2.X;
P3.Y = P1.Y + P2.Y;


cout<<"("<<P3.X<<", "<<P3.Y<<")";


return 0;
}