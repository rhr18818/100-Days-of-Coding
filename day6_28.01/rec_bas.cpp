//just doing it to maintain the r flow, today i have watched 2 videos of take u forward
//stiver's video 
#include <iostream>
using namespace std;
void step (int i, int n){
    if(i<1){
        return;
    }
    step(i-1,n);
    cout<<i<<" ";
}
int main(){
    int n;
    cin>>n;
    step(n,n);
    return 0;
}