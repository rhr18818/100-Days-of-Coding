#include <iostream>
using namespace std;
void print(int arr[],int s){
    cout<<"size of array is: "<<s<<":::  ";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int arraysum(int arr[],int s){
//base case
    
    if(s==0)
        return 0;
    if(s==1)
        return arr[0];
    
    int remainingpart = arraysum(arr+1,s-1);
    print(arr,s);
    int sum= arr[0]+ remainingpart;
    cout<<"sum:"<<sum<<endl;

    
    return sum;
}


int main(){
    int arr[5]={1,2,3,4,5};
    int s= sizeof(arr)/sizeof(arr[0]);
    int sum= arraysum(arr,s);
    cout<<sum;
    return 0;
}