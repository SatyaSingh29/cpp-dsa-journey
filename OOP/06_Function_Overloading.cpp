#include<iostream>
using namespace std;

class Printer   //Compile-time Polymorphism
{
    public:
     //Function Overloading
     
       void print(int x)
       {
           cout << "Integer: " << x << endl;
        }
        void print(double x)
       {
           cout << "Double: " << x << endl;
        }
        void print(string x)
       {
           cout << "String: " << x << endl;
        }
};
int main(){
   Printer p1;
   p1.print(3);
   Printer p2;
   p2.print(234.33);
   Printer p3;
   p3.print("Satya");
}
