#include<iostream>
using namespace std;
int main(){
    int n,h;
    cin>>n >>h;
    int w=0;
    for(int i=0;i<n;i++){
        int height;
        cin>>height;
        if(height>h){
            w+=2;
        }
        else{
            w++;
        }

    }
    cout<<w;
    return 0;


}