#include<iostream>
using namespace std;
class Person
{
public: int id;
string name;
public:

Person(int i, string n)
{
id = i;
name = n;

}
Person(Person &p)
{
id = p.id;
name = p.name;
//cout<<"Copy Constructor Called";
}

~Person()
{
cout<<"Object deleted"<<endl;
}

void display()
{ cout<<"id = "<<id<<" name= "<<name<<endl;}
};
int main()
{
Person p1(101, "ABC"), p2, p3(p1);
cout<<"p1 = ";
p1.display();
p2 = p1;

p1.id =1000;
cout<<endl;
cout<<" p1 = "<<&p1;
p1.display();
cout<<endl;
cout<<" p2 = "<<&p2;
p2.display();
cout<<endl;
cout<<" p3 = "<<&p3;
p3.display();


return 0;
}