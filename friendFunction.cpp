#include <iostream>
#include <string>
using namespace std;

class Student {
        int rollno;
        string name;
        static string course;

    public:
        
        Student(int r, string n) {
            rollno = r;
            name = n;
        }

        //method
        void displayDetails() {
            cout<<"student details are"<<endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name <<endl;
            cout<< " COURSE: "<<course<<endl;
        }
        //static member function 
        static void modifycourse(string mn)
        {
            course = mn;
        }
    friend void fun(Student &s3);
};

string Student::course="CSF102";
void fun(Student &s3){
      cout<<"student details are"<<endl;
            cout << "Roll No: " << rollno << endl;
            cout << "Name: " << name <<endl;
            cout<< " COURSE: "<<course<<endl;

}

int main(){
    Student s1(101, "Sumit");
    s1.displayDetails();
    Student s2(102, "Lassi");
    s2.displayDetails();
    fun(s2);
    return 0;    
}