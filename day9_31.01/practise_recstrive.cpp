//printing subsequences or subsets
#include <iostream>
#include <vector>
using namespace std;
void printsubseq(int arr[],vector<int> ds,int ind,int n){
    if(ind==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"[]";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    //taking part
    printsubseq(arr,ds,ind+1,n);
    ds.pop_back();
    printsubseq(arr,ds,ind+1,n);

}
int main(){
    int arr[3]={3,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    printsubseq(arr,ds,0,n);

    return 0;
}
