#include<iostream>
using namespace std;
class Student
{
    int marks;
    public:
        Student():marks(0){}
    friend class Teacher;

    int getMarks()
    {
        cout<<marks;
    }
};

class Teacher
{
    public:
    void AssignMarks(Student &s)
    {
        s.marks = 90;
      
    }
};

int main(){
    Student s1;
    Teacher t1;
    t1.AssignMarks(s1);
    s1.getMarks();
}