#include<iostream>
using namespace std;
void rechome(int src,int dest){
    //base case
    if(dest==src){
        cout<<"Arrived in destination.";
        return;
    }
    //recursive call
    rechome(src+1,dest);
}

int main(){
    int dest=10;
    int src=1;
    rechome(src,dest);
    return 0;
}