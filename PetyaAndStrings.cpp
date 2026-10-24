// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     string t;
//     cin>>s;
//     cin>>t;
//     int sizeS=s.size();
//     int sizeT=t.size();
//     if(sizeS==sizeT){
//         cout<<"0";
//     }
//     else if(sizeS<sizeT){
//         cout<<"-1";
//     }
//     else {
//         cout<<"1";
//     }
//     return 0;
  
// }

//Above code is wrong as we have to compare the strings lexographically

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    
    for(int i=0;i<s1.length();i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1<s2){
        cout<<"-1";
    }
    else if(s1==s2){
        cout<<"0";
    }
    else{
        cout<<"1";
        
    }
    return 0;
    
}