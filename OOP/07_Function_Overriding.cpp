#include<iostream>
using namespace std;

class Shape  //Run-time Polymorphism
{
    public:
       //Function overriding
    
        virtual void draw()
        {
            cout << "Drawing Shape";
        }
};
class Circle : public Shape
{
    public:
        void draw() override
        {
            cout << "Drawing Circle";
        }
};
int main(){
    Circle c1;
    c1.draw();  
}
