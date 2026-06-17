#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x:";
    cin>>x;
    int *p=&x;
    cout<<"x:"<<" "<<x<<endl;
    cout<<"&x:"<<" "<<&x<<endl;
    cout<<"p:"<<" "<<p<<endl;
    cout<<"*p:"<<" "<<*p;
    
 return 0;
}
