#include <iostream> 
using namespace std;

int main(){
    int n;
    cin>>n;
    string str = to_string(n);
    str.push_back('5');
    n=stoi(str);
    cout<<n+5<<"  "<<str;

    return 0;
}