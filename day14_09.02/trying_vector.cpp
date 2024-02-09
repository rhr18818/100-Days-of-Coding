#include <iostream>
#include <vector>
using namespace std;
void findcombination(int ind,int n,int target,int arr[],vector<int>ds,vector<vector<int>>& ans){
    if(ind==n){
        if(target==0){
            ans.push_back(ds);

        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcombination(ind,n,target-arr[ind],arr,ds,ans);
        ds.pop_back();
    }
    //ds.pop_back();--> wrong 
    //" it will throw an error cause it will try to pop even after the ds being empty!"
    findcombination(ind+1,n,target,arr,ds,ans);


}

int main(){
    int arr[4]={2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> ans;
    vector<int> ds; 
    int target= 7;
    findcombination(0,n,target,arr,ds,ans);
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl; 
    }
    return 0;
}