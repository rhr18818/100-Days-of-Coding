#include<iostream>
using namespace std;
void printstring(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit= n%10;
    n=n/10;
    //recurssive call
    printstring(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eigt","nine"};
    int n;
    cin>>n;
    //cout<<endl;
    printstring(n,arr);
    return 0;
}