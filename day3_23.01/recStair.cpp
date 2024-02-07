#include<iostream>
using namespace std;
int stair(int n){
    //base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //recursive call
    return stair(n-1)+stair(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<stair(n);
    return 0;
}