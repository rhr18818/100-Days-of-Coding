#include<iostream>
using namespace std;
void recarrrev(int a,int arr[],int n){
    //base case
    if(a>=n/2){
        return;
    }
    swap(arr[a],arr[n-a-1]);
    recarrrev(a+1,arr,n);
}
int main(){
    int arr[5]={1,2,3,4,5};
    recarrrev(0,arr,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}