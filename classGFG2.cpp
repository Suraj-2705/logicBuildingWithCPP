#include<iostream>
using namespace std;
class Student{
    private:

    int marks;

    public:
    Student(){
        marks = 0;
    }
    int getMarks(){
        return marks;
    }

    friend class Teacher;
};

class Teacher{
    public:
    void assignMarks(Student &s, int marks){
        s.marks = marks;
}
};

int main(){
    Student student;
    Teacher teacher;

    teacher.assignMarks(student, 100);
    cout << student.getMarks();
}