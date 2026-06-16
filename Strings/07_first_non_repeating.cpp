#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    for(int i=0;i<s.length();i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int count=0;
            for(int j=0;j<s.length();j++){
                if(s[i]==s[j]){
                    count++;
                }
            }
           if(count==1){
               cout<<"First non repeating character:"<<s[i];
               break;
           }
        }
    }
    return 0;
}
