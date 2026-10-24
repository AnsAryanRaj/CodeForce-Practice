#include<iostream>
using namespace std;
int main(){
    int n;
    int m=3;
    cin>>n;

    int arr[n][m];
  

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int attempt=0;
    
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                count++;
                // count=count/2;
            }
            
        }
        if(count>=2){
            attempt++;
        }
    }
    
    cout<<attempt;
}