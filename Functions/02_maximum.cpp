#include <iostream>
using namespace std;

int maximum(int a,int b){
    if(a>b)
       return a;
    else return b;
}
int main() {
    int n1,n2;
    cout << "Enter First number" <<" ";
    cin >> n1;
    cout << "Enter Second number" <<" ";
    cin >> n2;
    
   
    cout << "Maximum"<<" "<< maximum(n1,n2) ;
    
    
    return 0;
}
