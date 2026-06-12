#include <iostream>
using namespace std;
void primenumber(int n){
    int count=0;
     if(n<=1)
         count=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if(count==0){
       cout << "Prime";
    }
    else cout << "Not Prime";
}

int main(){
    int n;
    cout << "Enter number" <<" ";
    cin >> n;
    primenumber(n);
return 0;
}
