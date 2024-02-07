#include <iostream>
#include <vector>
using namespace std;
void subsequence(int ind, int n, int csum,int tsum,int arr[],vector<int> &ds){
    //base case
    if(ind>=n){
        if(csum==tsum){
            for(auto it:ds){
                cout<<it<<" ";
            }cout<<endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    csum += arr[ind];
    subsequence(ind+1,n,csum,tsum,arr,ds);
    ds.pop_back();
    csum -= arr[ind];
    subsequence(ind+1,n,csum,tsum,arr,ds);
}

int main(){
    int arr[3]={1,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    int tsum =2;
    subsequence(0,n,0,tsum,arr,ds);

    return 0;
}