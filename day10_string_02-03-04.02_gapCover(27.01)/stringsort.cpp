//two things in this code..
// count sort learn and second is string sort!

#include <iostream>
#include <string> 
#include <vector>

using namespace std;
void countsort(string &str){
    //storing the index
    vector <int> freq (26,0);
    for(int i=0;i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;
    }
    //sorting the string
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    //return str;

}

int main(){
    string str;
    cin>> str;
    countsort(str);
    cout<<str;

    return 0;
}