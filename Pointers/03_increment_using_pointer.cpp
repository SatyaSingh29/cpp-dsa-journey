#include<iostream>
using namespace std;
void increment(int *p){
    *p+=1;
}

int main(){
    int x;
    cout<<"x:";
    cin>>x;
    increment(&x);
    cout<<"After increment: "<<"x-> "<<x;
 return 0;
}
