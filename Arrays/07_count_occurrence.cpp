#include <iostream>
using namespace std;

int main() {
    int n,target;
    int count=0;
    cout << "Enter size of array:" << " ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << "Enter element to search:" <<" ";
    cin >> target;
    
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count+=1;
        }
    }
    cout << "Count Occurrence:" <<" " << count;
return 0;
}
