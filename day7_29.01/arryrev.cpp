#include <iostream>
using namespace std;
void arrrev(int arr[],int n){
    int a=0,b=n-1;
    while(a!=b){
        swap(arr[a],arr[b]);
        a++,b--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    arrrev(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}