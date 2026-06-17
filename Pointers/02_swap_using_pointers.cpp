#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;
    swap(&x,&y);
    cout<<"After swap: "<<"x: "<<x<<" "<<"y: "<<y;
 return 0;
}
