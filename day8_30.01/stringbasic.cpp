#include <iostream>
using namespace std;
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        return (ch-'A')+'a';
    }
}
void reverse(char name[],int len){
    int s=0, e=len-1;
    while (s!=e)
    {
        swap(name[s],name[e]);
        s++,e--;
    }
    
}
int getlength(char name[]){
    int count=0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[30];
    char ch;
    cin>>ch;
    cout<<toLowercase(ch);
    // //cin>>name;
    // int len =getlength(name);
    // cout<<"length of your name: "<<len<<endl;
    // reverse(name,len);
    // cout<<name;

    return 0;
}