#include<iostream>
using namespace std;
int main(){
    string s;
    char ch,newch;
    cout<<"enter:";
    getline(cin,s);
    cout<<"To b replaced:";
    cin>>ch;
    cout<<"replaced by:";
    cin>>newch;
    
    for(int i=0;i<s.length();i++){
        if(s[i]==ch){
            s[i]=newch;
        }
    }
    cout<<"Output:"<<s<<endl;
    return 0;
}
