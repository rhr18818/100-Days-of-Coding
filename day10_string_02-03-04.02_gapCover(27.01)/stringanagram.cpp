// here is two method of doing this , one is by checking the sorted string if they are same or not
//another is to check the freq vector if they are similar or not!

#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isanagami(string str1,string str2){
    vector<int> freq(26,0);
    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(isanagami(str1,str2)){
        cout<<"This is an Anagami.";
    }else{
        cout<<"This is not an Anagami.";
    }

    return 0;
}