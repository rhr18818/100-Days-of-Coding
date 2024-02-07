#include<iostream>
using namespace std;
//0 1 1 2 3 5 8
int fib(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    //recursive call
    return fib(n-1)+fib(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);

    return 0;
}