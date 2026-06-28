#include<iostream>
using namespace std;

class Employee
{
    string name;
    int salary;
    
    public:
        Employee(string name, int salary){
            this->name = name;             //this pointer to specify address of private member 
            this->salary = salary;
        }
        
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};
int main(){
    Employee e1("Satya",50000);
    e1.display();
}
