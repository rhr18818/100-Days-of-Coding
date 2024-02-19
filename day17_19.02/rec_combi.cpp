#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[5]={1,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    vector<int> ds; 
    int target= 4;
    //findcombinationsorted(0,n,target,arr,ds);
    return 0;

}