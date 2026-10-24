#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, w, n;
    cin>>k>>w>>n;
    int cost=0;
    for(int i=1;i<=n;i++){
        cost=cost+(i*k);
    }
    if(cost>w){
        cout<<cost-w;
    }
    else{
        cout<<"0";
    }
    return 0;
 
}