#include <iostream>
#include <vector>
using namespace std;
void findcombination(int ind,int n,int target,int arr[],vector<int>ds){
    if(ind==n){
        if(target==0){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;

        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findcombination(ind,n,target-arr[ind],arr,ds);
        ds.pop_back();
    }
    //ds.pop_back();--> wrong 
    //" it will throw an error cause it will try to pop even after the ds being empty!"
    findcombination(ind+1,n,target,arr,ds);


}

int main(){
    int arr[4]={2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ds; 
    int target= 7;
    findcombination(0,n,target,arr,ds);
    return 0;
}