#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=1;
    if(s.length()==0){
        count=0;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' && s[i+1]!=' '){
            count++;
        }
    }
    cout<<"Words:"<<count;
    return 0;
}
