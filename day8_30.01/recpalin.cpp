#include <iostream>
#include <string>
using namespace std;
char toLowercase(char ch){
    if(ch>='a'&& ch<='z'){
        return ch;
    }
    else{
        return (ch-'A')+'a';
    }
}
bool palindrom(string s,int a){
    //base case
    int n=s.size();
    if(a>=n/2){
        return true;
    }
    //processing
    if(toLowercase(s[a])!=toLowercase(s[n-a-1])){
        return false;
    }
    // recursive
    return palindrom(s,a+1);
}

int main(){
    string s ="Abc";
    cout<<palindrom(s,0); 
    return 0;
}