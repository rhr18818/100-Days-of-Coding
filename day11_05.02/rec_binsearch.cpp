#include<iostream>
using namespace std;
void arrayinput(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
int binsearch(int arr[],int key,int s,int e){
    int mid ;
    mid=(s+e)/2;
    //base case
    if(s<=e){

        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            return binsearch(arr,key,s,mid-1);
        }

        if(key>arr[mid]){
            return binsearch(arr,key,mid+1,e);
        }

    }

    return -1;
}


int main(){
    int n,key;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];
    arrayinput(arr,n);
    cout<<"Enter the key to search: ";
    cin>>key;
    int temp =binsearch(arr,key,1,n);
    if(temp==-1){
        cout<<"The key is not found . ";
    }
    else{
        cout<<"The position of the key is : "<< temp+1;
    }

    return 0;

}
