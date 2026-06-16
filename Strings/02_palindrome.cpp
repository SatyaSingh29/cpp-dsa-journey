#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
    }
    int flag=1;
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Palindrome";
    }
    else cout<<"Not Palindrome";
        
return 0;
}
