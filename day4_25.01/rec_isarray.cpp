#include <iostream>
using namespace std;
void print(int arr[],int s){
    cout<<"size of array is: "<<s<<":::  ";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool isarray(int arr[0],int s){
    //base case
    print(arr,s);
    if(s==0 || s==1)
        return true;
    //processing
    if(arr[0]>arr[1]){
        return false;
    }
    //recursive call
    else{
        return isarray(arr+1,s-1);
    }
}

int main(){
    int arr[5]={1,2,5,5,5};
    int s= sizeof(arr)/sizeof(arr[0]);
    bool ans = isarray(arr,s);
    if(ans){
        cout<<"Sorted";
    }
    else
        cout<<"unSorted";

    return 0;
}