#include <iostream>
using namespace std;

int main() {
    int n,target;
    int index=-1;
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
            index=i;
            break;
        }
    }
    if(index==-1){
        cout << "Not found";
    }
    else cout <<"First Occurrence at index" << " " <<index;

return 0;
}
