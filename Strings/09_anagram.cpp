#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"string1:";
    getline(cin,s1);
    cout<<"string2:";
    getline(cin,s2);
    if(s1.length()==s2.length()){
        for(int i=0;i<s1.length();i++){
            for(int j=i+1;j<s1.length();j++){
                if(s1[i]>s1[j]){
                    swap(s1[i],s1[j]);
                }
            }
            for(int i=0;i<s2.length();i++){
                for(int j=i+1;j<s2.length();j++){
                    if(s2[i]>s2[j]){
                    swap(s2[i],s2[j]);
                    } 
                } 
            } 
        } 
        if(s1==s2){
            cout<<"Anagram";
        }
        else cout<<"Not Anagram";
    }
     else cout<<"Not Anagram";
   
    return 0;
}
