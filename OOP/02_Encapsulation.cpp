#include<iostream>
using namespace std;

class Fan
{
    int speed;
    public:
        Fan()
        {
            speed=1;           //Default Constructor
        }
        
        void setSpeed(int s)  //Function to set speed
        {
            if(s >= 1 && s <= 5){
                speed = s;
            }
            else  
                  cout << "Invalid Speed" << endl;
        }
        void showSpeed()   //Function to show speed
        {
            cout << "Fan Speed: " << speed << endl;
        }
};

int main(){
    Fan f;
    f.showSpeed();
}
