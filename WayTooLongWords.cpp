#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }

    for(int i=0;i<n;i++){
        int size=s[i].length();

        if(size > 10){
        

            cout<<s[i][0]<<size-2<<s[i][n-1]<<endl; // Note- if we write s[n-1] only 
            // here it returns the last word of the array,
            // not the last char of the curr word  
            

        }
        else{
            cout<<s[i] << endl;
        }

    

    }

    return 0;
    
}

//Note--
// s[i]       → ith word
// s[i][j]    → jth character of ith word