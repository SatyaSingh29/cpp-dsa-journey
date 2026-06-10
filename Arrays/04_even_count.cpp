#include <iostream>
using namespace std;

int main() {
    int n,evencount=0;
    cout << "Enter size of array:" << " ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            evencount+=1;
    }
    
    cout << "Number of even elements:" <<" " <<evencount;
    

    return 0;
}
