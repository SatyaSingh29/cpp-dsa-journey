#include<iostream>
using namespace std;

class Student   
{
    public:
       string name;
       int rollNo;
       int marks;
       
       void display()    //function to print details
       {
           cout << "Name: " << name << endl;
           cout << "Roll Number: " << rollNo << endl;
           cout << "Marks: " << marks << endl;
       }
};
int main(){
    Student s1;    //object s1 created
    s1.name = "Satya";
    s1.rollNo = 10;
    s1.marks = 45;
    s1.display();
}
