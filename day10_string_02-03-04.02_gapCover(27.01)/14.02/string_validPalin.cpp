#include<iostream>
using namespace std;
class Solution {
private:
    char toLowercase(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
            return ch;
        }
        return (ch-'A')+'a';
    }
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') ||(ch>='A' && ch<='Z')){
            return true;
        }
        return false;
    }


public:
    bool isPalindrome(string s) {
        //removing excess character
        string temp;
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        //converting to lover case
        for(int i=0;i<temp.length();i++){
            temp[i]=toLowercase(temp[i]);
        }
        int st=0;
        int e=temp.size()-1;
        while (st<=e)
        {
            if(temp[st]!=temp[e]){
                return false;
            }
            else{
                st++,e--;
            }
        }
        return true;
        


    }
};
//another approach!
/*
class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
}
};

*/

int main(){
    string s;
    cin>>s;
    Solution a;
    if(a.isPalindrome(s)){
        cout<<"palindrom.";
    }
    else{
        cout<< "not palindrom.";
    }
    return 0;
}