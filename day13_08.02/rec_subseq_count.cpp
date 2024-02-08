#include <iostream>
#include <vector>
using namespace std;
int subsequencecount(int ind,int n,int csum,int tsum,int arr[]){
    if(ind>=n){
        if(csum==tsum){
            return 1;
        }
        return 0;
    }
    csum+=arr[ind];
    int l=subsequencecount(ind+1,n,csum,tsum,arr);
    csum-=arr[ind];
    int r=subsequencecount(ind+1,n,csum,tsum,arr);
    return l+r;
}

int main(){
    int arr[4]={2,1,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int tsum =2;
    cout<<subsequencecount(0,n,0,tsum,arr);
    
    return 0;
}