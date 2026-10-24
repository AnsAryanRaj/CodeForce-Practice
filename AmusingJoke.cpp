#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
int main(){
    string s, t, u;

    cin>>s;
    cin>>t;
    cin>>u;
    string x=s+t;
    sort(x.begin(), x.end());
    sort(u.begin(), u.end());
    if(x==u){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}