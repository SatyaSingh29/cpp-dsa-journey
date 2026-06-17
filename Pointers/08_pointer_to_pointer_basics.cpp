#include<iostream>
using namespace std;

int main() {
    int x = 10;

    int *p = &x;    // pointer to x
    int **pp = &p;  // pointer to pointer

    cout << "x = " << x << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
    cout << "pp = " << pp << endl;
    cout << "*pp = " << *pp << endl;
    cout << "**pp = " << **pp << endl;

    return 0;
}
