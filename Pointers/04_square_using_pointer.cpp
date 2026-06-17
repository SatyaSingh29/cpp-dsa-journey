#include<iostream>
using namespace std;
void square(int *p){
    *p*=*p;
}

int main(){
    int x;
    cout<<"x:";
    cin>>x;
    square(&x);
    cout<<"Square: "<<x;
 return 0;
}
