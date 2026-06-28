#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
        Rectangle()
        {
            length=1;           //Default Constructor
            breadth=1;
        }
        
        Rectangle(int l, int b)    //Parameterized Constructor
        {
            length = l;
            breadth = b;
        }
        void display()   
        {
            cout << "Length: " << length << endl;
            cout << "Breadth: " << breadth << endl;
            cout << "Area: " << length * breadth << endl;
            
        }
};

int main(){
    Rectangle r1;
    Rectangle r2(10,5);
    
    r1.display();
    r2.display();
}
