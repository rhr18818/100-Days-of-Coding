#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findcombinationsorted(int ind,int n,int target,int arr[],vector<int>ds){
        if(target==0){
            for(auto i:ds){
                cout<<i<<" ";
            }
            cout<<endl;
            return;
        }
        for(int i=ind;i<n;i++){
            if(i>ind && arr[i] ==arr[i-1]){
                continue;
            }
            if(arr[i]>target){
                break;
            }
            ds.push_back(arr[i]);
            findcombinationsorted(i+1,n,target-arr[i],arr,ds);
            //there is major difference's between passing ind+1 and i+1 ....
            //when pass ind+1 then it return all combinataion
            /*
            1 1 2
            1 2 1
            2 1 1
            2 2 
            */
           //when pass i+1 then it return all combinataion ...return the expected code
           /*
           1 1 2 
           2 2
           */
            ds.pop_back();
        }
        
    
}
int main(){
    int arr[5]={1,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    vector<int> ds; 
    int target= 4;
    findcombinationsorted(0,n,target,arr,ds);
    return 0;

}