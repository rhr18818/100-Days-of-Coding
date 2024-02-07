//multiple recurssion call
 //practising the next video 6th
 #include <iostream>
 #include <vector>
 using namespace std;
void printSub(int ind,vector<int> &ds,int arr[],int n){
    //base case
    if(ind==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"[]";
        }
        cout<<endl;
        return;
    }
    //take or pick conditon
    ds.push_back(arr[ind]);
    printSub(ind+1,ds,arr,n);
    ds.pop_back();
    //not take or not pick condition
    printSub(ind+1,ds,arr,n);
}
 int main(){
    int arr[]={3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> ds;
    printSub(0,ds,arr,n);
    return 0;
 }