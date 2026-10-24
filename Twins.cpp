#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Ts=0;
    for(int i=0;i<n;i++){
        Ts=Ts+arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());

    int count =0;
    int Cs=0; //currsum
    
    for(int i=0;i<n;i++){
        Cs=Cs+arr[i];
        count++;

        int Rs=Ts-Cs;
        
        if(Cs>Rs){
            cout<<count;
            return 0;
        }
    }

}