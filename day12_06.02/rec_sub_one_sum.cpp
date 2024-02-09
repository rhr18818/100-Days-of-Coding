#include <iostream>
#include <vector>
using namespace std;

bool onesubsequence(int ind,int n,int csum,int tsum,int arr[0],vector<int> ds){
    if(ind>=n){
        if(csum==tsum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        return false;
    }
    ds.push_back(arr[ind]);
    csum+=arr[ind];
    if(onesubsequence(ind+1,n,csum,tsum,arr,ds)==true){
        return true;
    }
    ds.pop_back();
    csum-=arr[ind];
    if(onesubsequence(ind+1,n,csum,tsum,arr,ds)==true){
        return true;
    }
    return false;

}
int main(){
    int arr[4]={2,1,1,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    int tsum =2;
    cout<<onesubsequence(0,n,0,tsum,arr,ds);
    
    return 0;
}