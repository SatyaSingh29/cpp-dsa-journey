#include<iostream>
using namespace std;

class Animal      //Parent Class
{
    public:
       string name;
       int age;
       void displayAnimal()
       {
           cout << "Animal Name: " << name << endl;
           cout << "Age: " << age << endl;
        }
};
class Dog : public Animal      //Child class Dog
{
    public:
       string breed;
       void displayDog()
       {
           cout << "Breed: " << breed << endl;
        }
    
};
int main(){
   Dog d1;
   d1.name = "Bruno";
   d1.age = 4;
   d1.breed = "Labrador";
   
   d1.displayAnimal();     //Inherited the member and functions of Parent Class
   d1.displayDog();
}
