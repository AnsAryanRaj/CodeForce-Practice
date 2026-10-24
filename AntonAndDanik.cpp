#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;

    string s;
    cin>>s;

    int c1=0;
    int c2=0;

    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            c1++;
        }
        else{
            c2++;
        }
    }
    if(c1>c2){
        cout<<"Anton";
    }
    else if(c1<c2){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}