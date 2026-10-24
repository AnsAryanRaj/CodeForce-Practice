// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<cctype>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int duplicate=0;
//     for(int i=0;i<s.size();i++){
//         for(int j=i+1;j<s.size();j++){
//             if(s[i]==s[j]){
//                 duplicate++;
//             }
//         }
        
//     }
//     int distinct=(s.size()-1)-duplicate;
//     if(distinct%2!=0){
//         cout<<"CHAT WITH HER!";
//     }
//     else{
//         cout<<"IGNORE HIM";
//     }
//     return 0;
// }
//Above code fails for test case 6--

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool visited[26] = {false};
    int distinct = 0;

    for (int i = 0; i < s.length(); i++) {
        int index = s[i] - 'a';

        if (visited[index] == false) {
            visited[index] = true;
            distinct++;
        }
    }

    if (distinct % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    return 0;
}