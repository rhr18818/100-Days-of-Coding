#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str ="hello";
    cout<<str.size()<<endl;
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}