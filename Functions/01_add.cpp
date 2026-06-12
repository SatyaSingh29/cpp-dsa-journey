#include <iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}

int main() {
    int a,b;
    cout << "First number" <<" ";
    cin >> a;
    cout << "Second number" <<" ";
    cin >> b;
   
    cout << "Sum"<<" "<<add(a,b);
  
    return 0;
}
