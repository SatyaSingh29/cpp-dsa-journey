#include<iostream>
using namespace std;

class Shape  
{
    public:
        virtual void draw()
        {
            cout << "Drawing Shape";
        }
};
class Circle : public Shape
{
    public:
        void draw() 
        {
            cout << "Drawing Circle";
        }
};
int main(){
    Shape *ptr;
    Circle c1;
    
    ptr = &c1;
    ptr->draw();
    
}
